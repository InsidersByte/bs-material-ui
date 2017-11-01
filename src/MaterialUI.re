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
  [@bs.module "material-ui/AppBar"] external reactClass : ReasonReact.reactClass = "default";
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
        Js.Nullable.(
          {
            "position": from_opt(position),
            "color": from_opt(color),
            "classes": from_opt(classes),
            "style": from_opt(style),
            "className": from_opt(className)
          }
        ),
      children
    );
};

module Avatar = {
  [@bs.module "material-ui/Avatar"] external reactClass : ReasonReact.reactClass = "default";
  let make =
      (
        ~alt: option(string)=?,
        ~className: option(string)=?,
        ~classes: option('t)=?,
        ~childrenClassName: option(string)=?,
        ~component: option(string)=?,
        ~imgProps: option(Js.t({..}))=?,
        ~sizes: option(string)=?,
        ~src: option(string)=?,
        ~srcSet: option(string)=?,
        ~style: option(ReactDOMRe.style)=?,
        children
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "alt": from_opt(alt),
            "childrenClassName": from_opt(childrenClassName),
            "className": from_opt(className),
            "classes": from_opt(classes),
            "component": from_opt(component),
            "imgProps": from_opt(imgProps),
            "sizes": from_opt(sizes),
            "src": from_opt(src),
            "srcSet": from_opt(srcSet),
            "style": from_opt(style)
          }
        ),
      children
    );
};

module Badge = {
  [@bs.module "material-ui/Badge"] external reactClass : ReasonReact.reactClass = "default";
  let make =
      (
        ~badgeContent: array(ReasonReact.reactElement),
        ~style: option(ReactDOMRe.style)=?,
        children
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=Js.Nullable.({"badgeContent": badgeContent, "style": from_opt(style)}),
      children
    );
};

module Button = {
  [@bs.module "material-ui/Button"] external reactClass : ReasonReact.reactClass = "default";
  let make =
      (
        ~raised=?,
        ~onClick: option((ReactEventRe.Mouse.t => unit))=?,
        ~className: option(string)=?,
        ~dense=?,
        ~disableFocusRipple=?,
        ~disableRipple=?,
        ~disabled=?,
        ~fab=?,
        children
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "raised": raised |> unwrapBool,
            "dense": dense |> unwrapBool,
            "disableFocusRipple": disableFocusRipple |> unwrapBool,
            "disableRipple": disableRipple |> unwrapBool,
            "disabled": disabled |> unwrapBool,
            "fab": fab |> unwrapBool,
            "onClick": onClick |> from_opt,
            "className": from_opt(className)
          }
        ),
      children
    );
};

module ButtonBase = {
  [@bs.module "material-ui/ButtonBase"] external reactClass : ReasonReact.reactClass = "default";
  let make =
      (
        ~style: option(ReactDOMRe.style)=?,
        ~onClick: option((ReactEventRe.Mouse.t => unit))=?,
        ~component: option(string)=?,
        ~className: option(string)=?,
        ~centerRipple=?,
        ~disableRipple=?,
        ~focusRipple=?,
        ~disabled=?,
        children
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "focusRipple": focusRipple |> unwrapBool,
            "centerRipple": centerRipple |> unwrapBool,
            "disableRipple": disableRipple |> unwrapBool,
            "disabled": disabled |> unwrapBool,
            "onClick": onClick |> Js.Undefined.from_opt,
            "component": from_opt(component),
            "className": from_opt(className),
            "style": from_opt(style)
          }
        ),
      children
    );
};

module Card = {
  [@bs.module "material-ui/Card"] external reactClass : ReasonReact.reactClass = "default";
  let make =
      (~raised=?, ~style: option(ReactDOMRe.style)=?, ~className: option(string)=?, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "raised": raised |> unwrapBool,
            "style": from_opt(style),
            "className": from_opt(className)
          }
        ),
      children
    );
};

module CardActions = {
  [@bs.module "material-ui/CardActions"] external reactClass : ReasonReact.reactClass = "default";
  let make = (~disableActionSpacing=?, ~style: option(ReactDOMRe.style)=?, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {"disableActionSpacing": disableActionSpacing |> unwrapBool, "style": from_opt(style)}
        ),
      children
    );
};

module CardContent = {
  [@bs.module "material-ui/CardContent"] external reactClass : ReasonReact.reactClass = "default";
  let make = (~style: option(ReactDOMRe.style)=?, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=Js.Nullable.({"style": from_opt(style)}),
      children
    );
};

module CardHeader = {
  [@bs.module "material-ui/CardHeader"] external reactClass : ReasonReact.reactClass = "default";
  let make =
      (
        ~style: option(ReactDOMRe.style)=?,
        ~avatar: option(array(ReasonReact.reactElement))=?,
        ~subheader: option(array(ReasonReact.reactElement))=?,
        ~title: option(array(ReasonReact.reactElement))=?,
        children
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "style": from_opt(style),
            "avatar": from_opt(avatar),
            "subheader": from_opt(subheader),
            "title": from_opt(title)
          }
        ),
      children
    );
};

module CardMedia = {
  [@bs.module "material-ui/CardMedia"] external reactClass : ReasonReact.reactClass = "default";
  let make = (~style: option(ReactDOMRe.style)=?, ~image: option(string)=?, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=Js.Nullable.({"style": from_opt(style), "image": from_opt(image)}),
      children
    );
};

module Chip = {
  [@bs.module "material-ui/Chip"] external reactClass : ReasonReact.reactClass = "default";
  let make =
      (
        ~avatar: option(array(ReasonReact.reactElement))=?,
        ~label: string,
        ~style: option(ReactDOMRe.style)=?,
        children
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=Js.Nullable.({"avatar": from_opt(avatar), "style": from_opt(style), "label": label}),
      children
    );
};

module CircularProgress = {
  [@bs.module "material-ui/CircularProgress"] external reactClass : ReasonReact.reactClass =
    "default";
  let make =
      (
        ~style: option(ReactDOMRe.style)=?,
        ~className: option(string)=?,
        ~color: option(string)=?,
        ~value: option(int)=?,
        ~valueBuffer: option(int)=?,
        ~mode: option(string)=?,
        ~size: option(int)=?,
        ~max: option(int)=?,
        ~min: option(int)=?,
        children
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "style": from_opt(style),
            "mode": from_opt(mode),
            "color": from_opt(color),
            "valueBuffer": from_opt(valueBuffer),
            "value": from_opt(value),
            "size": from_opt(size),
            "max": from_opt(max),
            "min": from_opt(min),
            "className": from_opt(className)
          }
        ),
      children
    );
};

module Collapse = {
  [@bs.module "material-ui/transitions/Collapse"] external reactClass : ReasonReact.reactClass =
    "default";
  let make = (~expanded: option(bool)=?, ~transitionDuration: option(string)=?, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {"in": unwrapBool(expanded), "transitionDuration": from_opt(transitionDuration)}
        ),
      children
    );
};

module Dialog = {
  type dialogClasses = {
    root: option(string),
    paper: option(string),
    paperWidthXs: option(string),
    paperWidthSm: option(string),
    paperWidthMd: option(string),
    fullScreen: option(string)
  };
  [@bs.module "material-ui/Dialog"] external reactClass : ReasonReact.reactClass = "default";
  let make =
      (
        ~classes: option(dialogClasses)=?,
        ~enterTransitionDuration: option(int)=?,
        ~leaveTransitionDuration: option(int)=?,
        ~fullScreen: option(bool)=?,
        ~ignoreBackdropClick: option(bool)=?,
        ~ignoreEscapeKeyUp: option(bool)=?,
        ~style: option(ReactDOMRe.style)=?,
        ~onBackdropClick: option((unit => unit))=?,
        ~onEnter: option((unit => unit))=?,
        ~onEntered: option((unit => unit))=?,
        ~onEntering: option((unit => unit))=?,
        ~onEscapeKeyUp: option((unit => unit))=?,
        ~onExit: option((unit => unit))=?,
        ~onExited: option((unit => unit))=?,
        ~onExiting: option((unit => unit))=?,
        ~onRequestClose: option((unit => unit))=?,
        ~openDialog: option(bool)=?,
        children
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "style": from_opt(style),
            "classes": from_opt(classes),
            "fullScreen": from_opt(fullScreen),
            "leaveTransitionDuration": from_opt(leaveTransitionDuration),
            "enterTransitionDuration": from_opt(enterTransitionDuration),
            "ignoreEscapeKeyUp": from_opt(ignoreEscapeKeyUp),
            "ignoreBackdropClick": from_opt(ignoreBackdropClick),
            "onBackdropClick": from_opt(onBackdropClick),
            "onEnter": from_opt(onEnter),
            "onEntered": from_opt(onEntered),
            "onEntering": from_opt(onEntering),
            "onEscapeKeyUp": from_opt(onEscapeKeyUp),
            "onExit": from_opt(onExit),
            "onExited": from_opt(onExited),
            "onExiting": from_opt(onExiting),
            "onRequestClose": from_opt(onRequestClose),
            "open": from_opt(openDialog)
          }
        ),
      children
    );
};

module DialogActions = {
  [@bs.module "material-ui/DialogActions"] external reactClass : ReasonReact.reactClass =
    "default";
  type dialogActionsClasses = {
    root: option(string),
    action: option(string),
    button: option(string)
  };
  let make = (~classes: option(dialogActionsClasses)=?, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=Js.Nullable.({"classes": from_opt(classes)}),
      children
    );
};

module DialogContent = {
  [@bs.module "material-ui/DialogContent"] external reactClass : ReasonReact.reactClass =
    "default";
  type dialogContentClasses = {root: option(string)};
  let make = (~classes: option(dialogContentClasses)=?, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=Js.Nullable.({"classes": from_opt(classes)}),
      children
    );
};

module DialogContentText = {
  [@bs.module "material-ui/DialogContentText"] external reactClass : ReasonReact.reactClass =
    "default";
  let make = (~style: option(ReactDOMRe.style)=?, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=Js.Nullable.({"style": from_opt(style)}),
      children
    );
};

module DialogTitle = {
  [@bs.module "material-ui/DialogTitle"] external reactClass : ReasonReact.reactClass = "default";
  type dialogTitleClasses = {root: option(string)};
  let make = (~classes: option(dialogTitleClasses)=?, ~disableTypography: option(bool)=?, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {"classes": from_opt(classes), "disableTypography": from_opt(disableTypography)}
        ),
      children
    );
};

module Divider = {
  [@bs.module "material-ui/Divider"] external reactClass : ReasonReact.reactClass = "default";
  let make =
      (
        ~inset: option(bool)=?,
        ~light: option(bool)=?,
        ~absolute: option(bool)=?,
        ~className: option(string)=?,
        children
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "light": unwrapBool(light),
            "inset": unwrapBool(inset),
            "absolute": unwrapBool(absolute),
            "className": from_opt(className)
          }
        ),
      children
    );
};

module FormControl = {
  [@bs.module "material-ui/FormControl"] external reactClass : ReasonReact.reactClass = "default";
  let make =
      (
        ~disabled=?,
        ~error=?,
        ~fullWidth=?,
        ~required=?,
        ~margin: option(string)=?,
        ~className: option(string)=?,
        ~style: option(ReactDOMRe.style)=?,
        children
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "disabled": unwrapBool(disabled),
            "error": unwrapBool(error),
            "fullWidth": unwrapBool(fullWidth),
            "required": unwrapBool(required),
            "margin": from_opt(margin),
            "className": from_opt(className),
            "style": from_opt(style)
          }
        ),
      children
    );
};

module FormControlLabel = {
  [@bs.module "material-ui/FormControlLabel"] external formControlLabel : ReasonReact.reactClass =
    "default";
  let make =
      /* technically a union bool|string but why are you passing a string to `checked`? */
      (
        ~disabled=?,
        ~checked: option(bool)=?,
        ~control: option(ReasonReact.reactElement)=?,
        ~label: option(string)=?,
        ~name: option(string)=?,
        ~onChange: option((ReactEventRe.Selection.t => unit))=?,
        ~value: option(string)=?,
        ~className: option(string)=?,
        ~style: option(ReactDOMRe.style)=?,
        children
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=formControlLabel,
      ~props=
        Js.Undefined.(
          {
            "checked": from_opt(checked),
            "label": from_opt(label),
            "control": from_opt(control),
            "disabled": unwrapBool(disabled),
            "name": from_opt(name),
            "onChange": from_opt(onChange),
            "value": from_opt(value),
            "style": from_opt(style),
            "className": from_opt(className)
          }
        ),
      children
    );
};

module FormLabel = {
  [@bs.module "material-ui/FormLabel"] external reactClass : ReasonReact.reactClass = "default";
  let make =
      (
        ~disabled=?,
        ~error=?,
        ~focused=?,
        ~required=?,
        ~margin: option(string)=?,
        ~className: option(string)=?,
        ~style: option(ReactDOMRe.style)=?,
        children
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Undefined.(
          {
            "disabled": unwrapBool(disabled),
            "error": unwrapBool(error),
            "focused": unwrapBool(focused),
            "required": unwrapBool(required),
            "margin": from_opt(margin),
            "className": from_opt(className),
            "style": from_opt(style)
          }
        ),
      children
    );
};
