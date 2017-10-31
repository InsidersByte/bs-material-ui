module MaterialUI =  {

  let from_opt = Js.Nullable.from_opt;

  let unwrapBool = (opt) =>
    switch opt {
      | Some(b) => b |> Js.Boolean.to_js_boolean |> Js.Undefined.return
      | None => Js.Undefined.empty
  };
  
  let option_map = (fn, opt_value) =>
    switch opt_value {
      | None => None
      | Some(value) => Some(fn(value))
  };
  

  module AppBar = {  
    
      [@bs.module "AppBar"] external reactClass : ReasonReact.reactClass = "default";
      let make =
          (
            ~position: option(string)=?,
            ~color: option(string)=?,
            ~classes: option(Js.t({..}))=?,
            ~style: option(ReactDOMRe.style)=?,
            ~className: option(string)=?,
            children
          ) =>
        ReasonReact.wrapJsForReason(
          ~reactClass,
          ~props=
              {
                "position": from_opt(position),
                "color": from_opt(color),
                "classes": from_opt(classes),
                "style": from_opt(style),
                "className": from_opt(className)
              },
          children
        );
    };
};



