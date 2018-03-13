type jsUnsafe;

external toJsUnsafe : 'a => jsUnsafe = "%identity";

let unwrapValue =
    (
      r: [<
        | `Int(int)
        | `IntArray(array(int))
        | `String(string)
        | `StringArray(array(string))
        | `Float(float)
        | `FloatArray(array(float))
      ],
    ) =>
  switch (r) {
  | `String(s) => toJsUnsafe(s)
  | `Int(i) => toJsUnsafe(i)
  | `StringArray(a) => toJsUnsafe(a)
  | `IntArray(a) => toJsUnsafe(a)
  | `Float(a) => toJsUnsafe(a)
  | `FloatArray(a) => toJsUnsafe(a)
  };

let unwrap_bool = (b: option(bool)) =>
  switch (b) {
  | Some(value) => Js.Nullable.return(Js.Boolean.to_js_boolean(value))
  | None => Js.Nullable.undefined
  };

let option_map = (fn, option) =>
  switch (option) {
  | Some(value) => Some(fn(value))
  | None => None
  };

module AppBar = {
  [@bs.module "material-ui/AppBar"]
  external reactClass : ReasonReact.reactClass = "default";
  let make =
      (
        ~position: option(string)=?,
        ~color: option(string)=?,
        ~classes: option(Js.t({..}))=?,
        ~style: option(ReactDOMRe.style)=?,
        ~className: option(string)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "position": fromOption(position),
            "color": fromOption(color),
            "classes": fromOption(classes),
            "style": fromOption(style),
            "className": fromOption(className),
          }
        ),
      children,
    );
};

module Avatar = {
  [@bs.module "material-ui/Avatar"]
  external reactClass : ReasonReact.reactClass = "default";
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
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "alt": fromOption(alt),
            "childrenClassName": fromOption(childrenClassName),
            "className": fromOption(className),
            "classes": fromOption(classes),
            "component": fromOption(component),
            "imgProps": fromOption(imgProps),
            "sizes": fromOption(sizes),
            "src": fromOption(src),
            "srcSet": fromOption(srcSet),
            "style": fromOption(style),
          }
        ),
      children,
    );
};

module Badge = {
  [@bs.module "material-ui/Badge"]
  external reactClass : ReasonReact.reactClass = "default";
  let make =
      (
        ~badgeContent: array(ReasonReact.reactElement),
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {"badgeContent": badgeContent, "style": fromOption(style)}
        ),
      children,
    );
};

module ButtonBase = {
  [@bs.module "material-ui/ButtonBase"]
  external reactClass : ReasonReact.reactClass = "default";
  let make =
      (
        ~classes: option(Js.t({..}))=?,
        ~style: option(ReactDOMRe.style)=?,
        ~onClick: option(ReactEventRe.Mouse.t => unit)=?,
        ~component: option(string)=?,
        ~className: option(string)=?,
        ~centerRipple: option(bool)=?,
        ~disableRipple: option(bool)=?,
        ~focusRipple: option(bool)=?,
        ~disabled: option(bool)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "classes": fromOption(classes),
            "focusRipple": unwrap_bool(focusRipple),
            "centerRipple": unwrap_bool(centerRipple),
            "disableRipple": unwrap_bool(disableRipple),
            "disabled": unwrap_bool(disabled),
            "onClick": fromOption(onClick),
            "component": fromOption(component),
            "className": fromOption(className),
            "style": fromOption(style),
          }
        ),
      children,
    );
};

module Button = {
  module Color = {
    type t =
      | Default
      | Inherit
      | Primary
      | Contrast
      | Accent;
    let to_string =
      fun
      | Default => "default"
      | Inherit => "inherit"
      | Primary => "primary"
      | Contrast => "contrast"
      | Accent => "accent";
  };
  [@bs.module "material-ui/Button"]
  external reactClass : ReasonReact.reactClass = "default";
  let make =
      (
        ~style: option(ReactDOMRe.style)=?,
        ~centerRipple: option(bool)=?,
        ~focusRipple: option(bool)=?,
        ~classes: option(Js.t({..}))=?,
        ~className: option(string)=?,
        ~color: option(Color.t)=?,
        ~component: option(string)=?,
        ~dense: option(bool)=?,
        ~disabled: option(bool)=?,
        ~disableFocusRipple: option(bool)=?,
        ~disableRipple: option(bool)=?,
        ~fab: option(bool)=?,
        ~href: option(string)=?,
        ~raised: option(bool)=?,
        ~_type: option(string)=?,
        ~onClick: option(ReactEventRe.Mouse.t => unit)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "classes": fromOption(classes),
            "className": fromOption(className),
            "color": fromOption(option_map(Color.to_string, color)),
            "component": fromOption(component),
            "dense": unwrap_bool(dense),
            "disabled": unwrap_bool(disabled),
            "disableFocusRipple": unwrap_bool(disableFocusRipple),
            "disableRipple": unwrap_bool(disableRipple),
            "fab": unwrap_bool(fab),
            "href": fromOption(href),
            "raised": unwrap_bool(raised),
            "type": fromOption(_type),
            "onClick": fromOption(onClick),
            "style": fromOption(style),
            "centerRipple": unwrap_bool(centerRipple),
            "focusRipple": unwrap_bool(focusRipple),
          }
        ),
      children,
    );
};

module CardActions = {
  [@bs.module "material-ui/Card"]
  external reactClass : ReasonReact.reactClass = "CardActions";
  let make =
      (~disableActionSpacing=?, ~style: option(ReactDOMRe.style)=?, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "disableActionSpacing": unwrap_bool(disableActionSpacing),
            "style": fromOption(style),
          }
        ),
      children,
    );
};

module CardContent = {
  [@bs.module "material-ui/Card"]
  external reactClass : ReasonReact.reactClass = "CardContent";
  let make = (~style: option(ReactDOMRe.style)=?, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=Js.Nullable.({"style": fromOption(style)}),
      children,
    );
};

module CardHeader = {
  [@bs.module "material-ui/Card"]
  external reactClass : ReasonReact.reactClass = "CardHeader";
  let make =
      (
        ~action: option(ReasonReact.reactElement)=?,
        ~avatar: option(ReasonReact.reactElement)=?,
        ~classes: option(Js.t({..}))=?,
        ~className: option(string)=?,
        ~style: option(ReactDOMRe.style)=?,
        ~title: option(ReasonReact.reactElement)=?,
        ~subheader: option(ReasonReact.reactElement)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "action": fromOption(action),
            "avatar": fromOption(avatar),
            "classes": fromOption(classes),
            "className": fromOption(className),
            "style": fromOption(style),
            "subheader": fromOption(subheader),
            "title": fromOption(title),
          }
        ),
      children,
    );
};

module CardMedia = {
  [@bs.module "material-ui/Card"]
  external reactClass : ReasonReact.reactClass = "CardMedia";
  let make =
      (
        ~style: option(ReactDOMRe.style)=?,
        ~image: option(string)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {"style": fromOption(style), "image": fromOption(image)}
        ),
      children,
    );
};

module Card = {
  [@bs.module "material-ui/Card"]
  external reactClass : ReasonReact.reactClass = "default";
  let make =
      (
        ~raised: option(bool)=?,
        ~style: option(ReactDOMRe.style)=?,
        ~className: option(string)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "raised": unwrap_bool(raised),
            "style": fromOption(style),
            "className": fromOption(className),
          }
        ),
      children,
    );
};

module Checkbox = {
  [@bs.module "material-ui/Checkbox"]
  external reactClass : ReasonReact.reactClass = "default";
  let make =
      /* technically a union bool|string but why are you passing a string to `checked`? */
      (
        ~classes: option(Js.t({..}))=?,
        ~className: option(string)=?,
        ~checked: option(bool)=?,
        ~checkedClassName: option(string)=?,
        ~checkedIcon: option(ReasonReact.reactElement)=?,
        ~disableRipple: option(bool)=?,
        ~disabled: option(bool)=?,
        ~disabledClassName: option(string)=?,
        ~icon: option(ReasonReact.reactElement)=?,
        ~indeterminate: option(bool)=?,
        ~indeterminateIcon: option(ReasonReact.reactElement)=?,
        /* TODO inputProps */
        /* TODO inputRef */
        ~name: option(string)=?,
        ~onChange: option((ReactEventRe.Selection.t, Js.boolean) => unit)=?,
        ~value: option(string)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "classes": fromOption(classes),
            "className": fromOption(className),
            "checked": unwrap_bool(checked),
            "checkedClassName": fromOption(checkedClassName),
            "checkedIcon": fromOption(checkedIcon),
            "disableRipple": unwrap_bool(disableRipple),
            "disabled": unwrap_bool(disabled),
            "disabledClassName": fromOption(disabledClassName),
            "icon": fromOption(icon),
            "indeterminate": unwrap_bool(indeterminate),
            "indeterminateIcon": fromOption(indeterminateIcon),
            "name": fromOption(name),
            "onChange": fromOption(onChange),
            "value": fromOption(value),
            "style": fromOption(style),
          }
        ),
      children,
    );
};

module Chip = {
  [@bs.module "material-ui/Chip"]
  external reactClass : ReasonReact.reactClass = "default";
  let make =
      (
        ~avatar: option(ReasonReact.reactElement)=?,
        ~className: option(string)=?,
        ~classes: option(Js.t({..}))=?,
        ~deleteIcon: option(ReasonReact.reactElement)=?,
        ~label: option(string),
        ~onClick: option(ReactEventRe.Mouse.t => unit)=?,
        ~onKeyDown: option(ReactEventRe.Keyboard.t)=?,
        ~onDelete: option(ReactEventRe.Synthetic.t => unit)=?,
        ~style: option(ReactDOMRe.style)=?,
        ~tabIndex: option([ | `String(string) | `Int(int)])=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "avatar": fromOption(avatar),
            "className": fromOption(className),
            "classes": fromOption(classes),
            "deleteIcon": fromOption(deleteIcon),
            "label": fromOption(label),
            "onClick": fromOption(onClick),
            "onKeyDown": fromOption(onKeyDown),
            "onDelete": fromOption(onDelete),
            "style": fromOption(style),
            "tabIndex": fromOption(option_map(unwrapValue, tabIndex)),
          }
        ),
      children,
    );
};

module CircularProgress = {
  [@bs.module "material-ui/Progress"]
  external reactClass : ReasonReact.reactClass = "CircularProgress";
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
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "style": fromOption(style),
            "mode": fromOption(mode),
            "color": fromOption(color),
            "valueBuffer": fromOption(valueBuffer),
            "value": fromOption(value),
            "size": fromOption(size),
            "max": fromOption(max),
            "min": fromOption(min),
            "className": fromOption(className),
          }
        ),
      children,
    );
};

module Collapse = {
  [@bs.module "material-ui/transitions/Collapse"]
  external reactClass : ReasonReact.reactClass = "default";
  let make =
      (
        ~expanded: option(bool)=?,
        ~transitionDuration: option(string)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "in": unwrap_bool(expanded),
            "transitionDuration": fromOption(transitionDuration),
          }
        ),
      children,
    );
};

module DialogActions = {
  [@bs.module "material-ui/Dialog"]
  external reactClass : ReasonReact.reactClass = "DialogActions";
  let make = (~classes: option(Js.t({..}))=?, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=Js.Nullable.({"classes": fromOption(classes)}),
      children,
    );
};

module DialogContentText = {
  [@bs.module "material-ui/Dialog"]
  external reactClass : ReasonReact.reactClass = "DialogContentText";
  let make = (~style: option(ReactDOMRe.style)=?, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=Js.Nullable.({"style": fromOption(style)}),
      children,
    );
};

module DialogContent = {
  [@bs.module "material-ui/Dialog"]
  external reactClass : ReasonReact.reactClass = "DialogContent";
  let make = (~classes: option(Js.t({..}))=?, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=Js.Nullable.({"classes": fromOption(classes)}),
      children,
    );
};

module DialogTitle = {
  [@bs.module "material-ui/Dialog"]
  external reactClass : ReasonReact.reactClass = "DialogTitle";
  let make =
      (
        ~classes: option(Js.t({..}))=?,
        ~disableTypography: option(bool)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "classes": fromOption(classes),
            "disableTypography": fromOption(disableTypography),
          }
        ),
      children,
    );
};

module Dialog = {
  [@bs.module "material-ui/Dialog"]
  external reactClass : ReasonReact.reactClass = "default";
  let make =
      (
        ~classes: option(Js.t({..}))=?,
        ~className: option(string)=?,
        ~disableBackdropClick: option(bool)=?,
        ~disableEscapeKeyUp: option(bool)=?,
        ~fullScreen: option(bool)=?,
        ~fullWidth: option(bool)=?,
        /* TODO: add maxWidth */
        ~onBackdropClick: option(unit => unit)=?,
        ~onClose: option(unit => unit)=?,
        ~onEnter: option(unit => unit)=?,
        ~onEntered: option(unit => unit)=?,
        ~onEntering: option(unit => unit)=?,
        ~onEscapeKeyUp: option(unit => unit)=?,
        ~onExit: option(unit => unit)=?,
        ~onExited: option(unit => unit)=?,
        ~onExiting: option(unit => unit)=?,
        ~_open: option(bool)=?,
        /* TODO: add transition */
        /* TODO: add transitionDuration */
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "classes": fromOption(classes),
            "className": fromOption(className),
            "disableBackdropClick": fromOption(disableBackdropClick),
            "disableEscapeKeyUp": fromOption(disableEscapeKeyUp),
            "fullScreen": fromOption(fullScreen),
            "fullWidth": fromOption(fullWidth),
            "onBackdropClick": fromOption(onBackdropClick),
            "onClose": fromOption(onClose),
            "onEnter": fromOption(onEnter),
            "onEntered": fromOption(onEntered),
            "onEntering": fromOption(onEntering),
            "onEscapeKeyUp": fromOption(onEscapeKeyUp),
            "onExit": fromOption(onExit),
            "onExited": fromOption(onExited),
            "onExiting": fromOption(onExiting),
            "open": fromOption(_open),
            "style": fromOption(style),
          }
        ),
      children,
    );
};

module Divider = {
  [@bs.module "material-ui/Divider"]
  external reactClass : ReasonReact.reactClass = "default";
  let make =
      (
        ~inset: option(bool)=?,
        ~light: option(bool)=?,
        ~absolute: option(bool)=?,
        ~className: option(string)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "light": unwrap_bool(light),
            "inset": unwrap_bool(inset),
            "absolute": unwrap_bool(absolute),
            "className": fromOption(className),
          }
        ),
      children,
    );
};

module Drawer = {
  module Anchor = {
    type t =
      | Left
      | Top
      | Right
      | Bottom;
    let to_string =
      fun
      | Left => "left"
      | Top => "top"
      | Right => "right"
      | Bottom => "bottom";
  };
  module Type = {
    type t =
      | Permanent
      | Persistent
      | Temporary;
    let to_string =
      fun
      | Permanent => "permanent"
      | Persistent => "persistent"
      | Temporary => "temporary";
  };
  [@bs.module "material-ui/Drawer"]
  external reactClass : ReasonReact.reactClass = "default";
  let make =
      (
        ~anchor: option(Anchor.t)=?,
        ~classes: option(Js.t({..}))=?,
        ~className: option(string)=?,
        ~elevation: option(int)=?,
        ~transitionDuration: option(Js.t({..}))=?,
        ~modalProps: option(Js.t({..}))=?,
        ~onClose: option(unit => unit)=?,
        ~_open: option(bool)=?,
        ~slideProps: option(Js.t({..}))=?,
        ~_type: option(Type.t)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "anchor": fromOption(option_map(Anchor.to_string, anchor)),
            "classes": fromOption(classes),
            "className": fromOption(className),
            "elevation": fromOption(elevation),
            "transitionDuration": fromOption(transitionDuration),
            "ModalProps": fromOption(modalProps),
            "onClose": fromOption(onClose),
            "open": unwrap_bool(_open),
            "SlideProps": fromOption(slideProps),
            "type": fromOption(option_map(Type.to_string, _type)),
            "style": fromOption(style),
          }
        ),
      children,
    );
};

module Margin = {
  type t =
    | None
    | Dense
    | Normal;
  let to_string =
    fun
    | None => "none"
    | Dense => "dense"
    | Normal => "normal";
};

module FormControl = {
  [@bs.module "material-ui/Form"]
  external reactClass : ReasonReact.reactClass = "FormControl";
  let make =
      (
        ~classes: option(Js.t({..}))=?,
        ~className: option(string)=?,
        ~component: option(string)=?,
        ~disabled: option(bool)=?,
        ~error: option(bool)=?,
        ~fullWidth: option(bool)=?,
        ~onBlur: option(ReactEventRe.Focus.t => unit)=?,
        ~onFocus: option(ReactEventRe.Focus.t => unit)=?,
        ~required: option(bool)=?,
        ~margin: option(Margin.t)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "classes": fromOption(classes),
            "className": fromOption(className),
            "component": fromOption(component),
            "disabled": unwrap_bool(disabled),
            "error": unwrap_bool(error),
            "fullWidth": unwrap_bool(fullWidth),
            "onBlur": fromOption(onBlur),
            "onFocus": fromOption(onFocus),
            "required": unwrap_bool(required),
            "margin": fromOption(option_map(Margin.to_string, margin)),
            "style": fromOption(style),
          }
        ),
      children,
    );
};

module FormControlLabel = {
  [@bs.module "material-ui/Form"]
  external reactClass : ReasonReact.reactClass = "FormControlLabel";
  let make =
      /* technically a union bool|string but why are you passing a string to `checked`? */
      (
        ~checked: option(bool)=?,
        ~classes: option(Js.t({..}))=?,
        ~className: option(string)=?,
        ~control: option(ReasonReact.reactElement)=?,
        ~disabled: option(bool)=?,
        /* TODO: is actually a  function */
        ~inputRef=?,
        /* TODO: is actually a Node */
        ~label: option(string)=?,
        ~name: option(string)=?,
        ~onChange: option(ReactEventRe.Selection.t => unit)=?,
        ~value: option(string)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "checked": fromOption(checked),
            "classes": fromOption(classes),
            "className": fromOption(className),
            "control": fromOption(control),
            "disabled": unwrap_bool(disabled),
            "inputRef": fromOption(inputRef),
            "label": fromOption(label),
            "name": fromOption(name),
            "onChange": fromOption(onChange),
            "value": fromOption(value),
            "style": fromOption(style),
          }
        ),
      children,
    );
};

module FormGroup = {
  [@bs.module "material-ui/Form"]
  external reactClass : ReasonReact.reactClass = "FormGroup";
  let make =
      (
        ~classes: option(Js.t({..}))=?,
        ~className: option(string)=?,
        ~row: option(bool)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "classes": fromOption(classes),
            "className": fromOption(className),
            "row": unwrap_bool(row),
            "style": fromOption(style),
          }
        ),
      children,
    );
};

module FormHelperText = {
  [@bs.module "material-ui/Form"]
  external reactClass : ReasonReact.reactClass = "FormHelperText";
  let make =
      (
        ~classes: option(Js.t({..}))=?,
        ~className: option(string)=?,
        ~disabled: option(bool)=?,
        ~error: option(bool)=?,
        ~margin: option(Margin.t)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "classes": fromOption(classes),
            "className": fromOption(className),
            "disabled": unwrap_bool(disabled),
            "error": unwrap_bool(error),
            "margin": fromOption(option_map(Margin.to_string, margin)),
            "style": fromOption(style),
          }
        ),
      children,
    );
};

module FormLabel = {
  [@bs.module "material-ui/Form"]
  external reactClass : ReasonReact.reactClass = "FormLabel";
  let make =
      (
        ~classes: option(Js.t({..}))=?,
        ~className: option(string)=?,
        ~component: option(string)=?,
        ~disabled: option(bool)=?,
        ~error: option(bool)=?,
        ~focused: option(bool)=?,
        ~required: option(bool)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "classes": fromOption(classes),
            "className": fromOption(className),
            "component": fromOption(component),
            "disabled": unwrap_bool(disabled),
            "error": unwrap_bool(error),
            "focused": unwrap_bool(focused),
            "required": unwrap_bool(required),
            "style": fromOption(style),
          }
        ),
      children,
    );
};

module Grid = {
  [@bs.module "material-ui/Grid"]
  external reactClass : ReasonReact.reactClass = "default";
  let make =
      (
        ~align: option(string)=?,
        ~component: option(string)=?,
        ~direction: option(string)=?,
        ~wrap: option(string)=?,
        ~justify: option(string)=?,
        ~xl: option(int)=?,
        ~lg: option(int)=?,
        ~md: option(int)=?,
        ~sm: option(int)=?,
        ~xs: option(int)=?,
        ~spacing: option(int)=?,
        ~container: option(bool)=?,
        ~item: option(bool)=?,
        ~className: option(string)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "container": unwrap_bool(container),
            "item": unwrap_bool(item),
            "style": fromOption(style),
            "className": fromOption(className),
            "align": fromOption(align),
            "component": fromOption(component),
            "direction": fromOption(direction),
            "wrap": fromOption(wrap),
            "justify": fromOption(justify),
            "xl": fromOption(xl),
            "lg": fromOption(lg),
            "md": fromOption(md),
            "sm": fromOption(sm),
            "xs": fromOption(xs),
            "spacing": fromOption(spacing),
            "wrp": fromOption(wrap),
          }
        ),
      children,
    );
};

module IconButton = {
  module Color = {
    type t =
      | Default
      | Inherit
      | Primary
      | Contrast
      | Accent;
    let to_string =
      fun
      | Default => "default"
      | Inherit => "inherit"
      | Primary => "primary"
      | Contrast => "contrast"
      | Accent => "accent";
  };
  [@bs.module "material-ui/IconButton"]
  external reactClass : ReasonReact.reactClass = "default";
  let make =
      (
        ~classes: option(Js.t({..}))=?,
        ~className: option(string)=?,
        ~color: option(Color.t)=?,
        ~disabled: option(bool)=?,
        ~disableRipple: option(bool)=?,
        ~style: option(ReactDOMRe.style)=?,
        ~onClick: option(ReactEventRe.Mouse.t => unit)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "classes": fromOption(classes),
            "className": fromOption(className),
            "color": fromOption(option_map(Color.to_string, color)),
            "disableRipple": unwrap_bool(disableRipple),
            "disabled": unwrap_bool(disabled),
            "style": fromOption(style),
            "onClick": fromOption(onClick),
          }
        ),
      children,
    );
};

module InputLabel = {
  [@bs.module "material-ui/Input"]
  external reactClass : ReasonReact.reactClass = "InputLabel";
  let make =
      (
        ~classes: option(Js.t({..}))=?,
        ~className: option(string)=?,
        ~disableAnimation: option(bool)=?,
        ~disabled: option(bool)=?,
        ~error: option(bool)=?,
        ~_FormControlClasses: option(Js.t({..}))=?,
        ~focused: option(bool)=?,
        ~htmlFor: option(string)=?,
        ~margin: option(Margin.t)=?,
        ~required: option(bool)=?,
        ~shrink: option(bool)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "classes": fromOption(classes),
            "className": fromOption(className),
            "disableAnimation": unwrap_bool(disableAnimation),
            "disabled": unwrap_bool(disabled),
            "error": unwrap_bool(error),
            "FormControlClasses": fromOption(_FormControlClasses),
            "focused": unwrap_bool(focused),
            "htmlFor": fromOption(htmlFor),
            "margin": fromOption(option_map(Margin.to_string, margin)),
            "required": unwrap_bool(required),
            "shrink": unwrap_bool(shrink),
            "style": fromOption(style),
          }
        ),
      children,
    );
};

module Input = {
  [@bs.module "material-ui/Input"]
  external reactClass : ReasonReact.reactClass = "default";
  let make =
      (
        ~disableUnderline: option(bool)=?,
        ~disabled: option(bool)=?,
        ~error: option(bool)=?,
        ~id: option(string)=?,
        ~autoFocus: option(bool)=?,
        ~fullWidth: option(bool)=?,
        ~style: option(ReactDOMRe.style)=?,
        ~value: option(string)=?,
        ~onChange: option(ReactEventRe.Form.t => unit)=?,
        ~placeholder: option(string)=?,
        ~className: option(string)=?,
        ~inputType: option(string)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "disableUnderline": unwrap_bool(disableUnderline),
            "disabled": unwrap_bool(disabled),
            "error": unwrap_bool(error),
            "id": fromOption(id),
            "fullWidth": unwrap_bool(fullWidth),
            "autoFocus": unwrap_bool(autoFocus),
            "style": fromOption(style),
            "placeholder": fromOption(placeholder),
            "className": fromOption(className),
            "type": fromOption(inputType),
            "value": fromOption(value),
            "onChange": fromOption(onChange),
          }
        ),
      children,
    );
};

module LinearProgress = {
  [@bs.module "material-ui/Progress"]
  external reactClass : ReasonReact.reactClass = "LinearProgress";
  let make =
      (
        ~style: option(ReactDOMRe.style)=?,
        ~className: option(string)=?,
        ~color: option(string)=?,
        ~value: option(int)=?,
        ~valueBuffer: option(int)=?,
        ~mode: option(string)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "style": fromOption(style),
            "mode": fromOption(mode),
            "color": fromOption(color),
            "valueBuffer": fromOption(valueBuffer),
            "value": fromOption(value),
            "className": fromOption(className),
          }
        ),
      children,
    );
};

module ListItemAvatar = {
  [@bs.module "material-ui/List"]
  external reactClass : ReasonReact.reactClass = "ListItemAvatar";
  let make =
      (
        ~classes: option(Js.t({..}))=?,
        ~className: option(string)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "classes": fromOption(classes),
            "style": fromOption(style),
            "className": fromOption(className),
          }
        ),
      children,
    );
};

module ListItemIcon = {
  [@bs.module "material-ui/List"]
  external reactClass : ReasonReact.reactClass = "ListItemIcon";
  let make =
      (
        ~classes: option(Js.t({..}))=?,
        ~className: option(string)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "classes": fromOption(classes),
            "style": fromOption(style),
            "className": fromOption(className),
          }
        ),
      children,
    );
};

module ListItemSecondaryAction = {
  [@bs.module "material-ui/List"]
  external reactClass : ReasonReact.reactClass = "ListItemSecondaryAction";
  let make =
      (
        ~classes: option(Js.t({..}))=?,
        ~className: option(string)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "classes": fromOption(classes),
            "style": fromOption(style),
            "className": fromOption(className),
          }
        ),
      children,
    );
};

module ListItemText = {
  [@bs.module "material-ui/List"]
  external reactClass : ReasonReact.reactClass = "ListItemText";
  let make =
      (
        ~classes: option(Js.t({..}))=?,
        ~className: option(string)=?,
        ~disableTypography: option(bool)=?,
        ~inset: option(bool)=?,
        ~primary: option(string)=?,
        ~secondary: option(string)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "classes": fromOption(classes),
            "className": fromOption(className),
            "disableTypography": unwrap_bool(disableTypography),
            "inset": unwrap_bool(inset),
            "primary": fromOption(primary),
            "secondary": fromOption(secondary),
            "style": fromOption(style),
          }
        ),
      children,
    );
};

module ListItem = {
  [@bs.module "material-ui/List"]
  external reactClass : ReasonReact.reactClass = "ListItem";
  let make =
      (
        ~button: option(bool)=?,
        ~classes: option(Js.t({..}))=?,
        ~className: option(string)=?,
        ~component: option(string)=?,
        ~dense: option(bool)=?,
        ~disabled: option(bool)=?,
        ~disableGutters: option(bool)=?,
        ~divider: option(bool)=?,
        ~style: option(ReactDOMRe.style)=?,
        ~onClick: option(ReactEventRe.Mouse.t => unit)=?,
        ~href: option(string)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "button": unwrap_bool(button),
            "classes": fromOption(classes),
            "className": fromOption(className),
            "component": fromOption(component),
            "dense": unwrap_bool(dense),
            "disabled": unwrap_bool(disabled),
            "disableGutters": unwrap_bool(disableGutters),
            "divider": unwrap_bool(divider),
            "style": fromOption(style),
            "onClick": fromOption(onClick),
            "href": fromOption(href),
          }
        ),
      children,
    );
};

module ListSubheader = {
  module Color = {
    type t =
      | Default
      | Inherit
      | Primary;
    let to_string =
      fun
      | Default => "default"
      | Inherit => "inherit"
      | Primary => "primary";
  };
  [@bs.module "material-ui/List"]
  external reactClass : ReasonReact.reactClass = "ListSubheader";
  let make =
      (
        ~classes: option(Js.t({..}))=?,
        ~className: option(string)=?,
        ~color: option(Color.t)=?,
        ~disableSticky: option(bool)=?,
        ~inset: option(bool)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "classes": fromOption(classes),
            "className": fromOption(className),
            "color": fromOption(option_map(Color.to_string, color)),
            "disableSticky": unwrap_bool(disableSticky),
            "inset": unwrap_bool(inset),
            "style": fromOption(style),
          }
        ),
      children,
    );
};

module List = {
  [@bs.module "material-ui/List"]
  external reactClass : ReasonReact.reactClass = "default";
  let make =
      (
        ~classes: option(Js.t({..}))=?,
        ~className: option(string)=?,
        ~component: option(string)=?,
        ~dense: option(bool)=?,
        ~disablePadding: option(bool)=?,
        ~subheader: option(ReasonReact.reactElement)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "classes": fromOption(classes),
            "className": fromOption(className),
            "component": fromOption(component),
            "dense": unwrap_bool(dense),
            "disablePadding": unwrap_bool(disablePadding),
            "subheader": fromOption(subheader),
            "style": fromOption(style),
          }
        ),
      children,
    );
};

module MenuItem = {
  [@bs.module "material-ui/Menu"]
  external reactClass : ReasonReact.reactClass = "MenuItem";
  let make =
      (
        ~classes: option(Js.t({..}))=?,
        ~className: option(string)=?,
        ~component: option(string)=?,
        ~role: option(string)=?,
        ~selected: option(bool)=?,
        ~onClick: option(ReactEventRe.Mouse.t => unit)=?,
        ~style: option(ReactDOMRe.style)=?,
        ~value: option([ | `String(string) | `Int(int)])=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "classes": fromOption(classes),
            "className": fromOption(className),
            "component": fromOption(component),
            "role": fromOption(role),
            "selected": unwrap_bool(selected),
            "onClick": fromOption(onClick),
            "style": fromOption(style),
            "value": fromOption(option_map(unwrapValue, value)),
          }
        ),
      children,
    );
};

module Paper = {
  [@bs.module "material-ui/Paper"]
  external toolbar : ReasonReact.reactClass = "default";
  let make =
      (
        ~classes: option(Js.t({..}))=?,
        ~className: option(string)=?,
        ~component: option(string)=?,
        ~elevation: option(int)=?,
        ~square: option(bool)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=toolbar,
      ~props=
        Js.Nullable.(
          {
            "classes": fromOption(classes),
            "className": fromOption(className),
            "component": fromOption(component),
            "elevation": fromOption(elevation),
            "square": unwrap_bool(square),
            "style": fromOption(style),
          }
        ),
      children,
    );
};

module Select = {
  [@bs.module "material-ui/Select"]
  external reactClass : ReasonReact.reactClass = "default";
  let make =
      (
        ~autoWidth: option(bool)=?,
        ~classes: option(Js.t({..}))=?,
        ~className: option(string)=?,
        ~displayEmpty: option(bool)=?,
        ~input: option(ReasonReact.reactElement)=?,
        ~inputClasses: option(Js.t({..}))=?,
        ~native: option(bool)=?,
        ~multiple: option(bool)=?,
        ~menuProps: option(Js.t({..}))=?,
        ~value:
           option(
             [
               | `Int(int)
               | `IntArray(array(int))
               | `String(string)
               | `StringArray(array(string))
             ],
           )=?,
        ~style: option(ReactDOMRe.style)=?,
        /* Input Props*/
        ~disableUnderline: option(bool)=?,
        ~disabled: option(bool)=?,
        ~error: option(bool)=?,
        ~autoFocus: option(bool)=?,
        ~fullWidth: option(bool)=?,
        ~onChange: option(ReactEventRe.Form.t => unit)=?,
        ~placeholder: option(string)=?,
        ~inputType: option(string)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "autoWidth": unwrap_bool(autoWidth),
            "classes": fromOption(classes),
            "className": fromOption(className),
            "displayEmpty": unwrap_bool(displayEmpty),
            "input": fromOption(input),
            "InputClasses": fromOption(inputClasses),
            "native": unwrap_bool(native),
            "multiple": unwrap_bool(multiple),
            "MenuProps": fromOption(menuProps),
            "value": fromOption(option_map(unwrapValue, value)),
            "style": fromOption(style),
            /* TODO: Input Props: find a way to rectactor props duplication. */
            "disableUnderline": unwrap_bool(disableUnderline),
            "disabled": unwrap_bool(disabled),
            "error": unwrap_bool(error),
            "fullWidth": unwrap_bool(fullWidth),
            "autoFocus": unwrap_bool(autoFocus),
            "placeholder": fromOption(placeholder),
            "type": fromOption(inputType),
            "onChange": fromOption(onChange),
          }
        ),
      children,
    );
};

module Tab = {
  module TextColor = {
    type t =
      | Accent
      | Primary
      | Inherit;
    let to_string =
      fun
      | Accent => "accent"
      | Primary => "primary"
      | Inherit => "inherit";
  };
  [@bs.module "material-ui/Tabs"]
  external reactClass : ReasonReact.reactClass = "Tab";
  let make =
      (
        ~classes: option(Js.t({..}))=?,
        ~className: option(string)=?,
        ~disabled: option(bool)=?,
        ~fullWidth: option(bool)=?,
        ~icon: option(ReasonReact.reactElement)=?,
        ~indicator: option(ReasonReact.reactElement)=?,
        ~label: option(ReasonReact.reactElement)=?,
        ~onChange: option(ReasonReact.Callback.t(ReactEventRe.Synthetic.t))=?,
        ~onClick: option(ReasonReact.Callback.t(ReactEventRe.Synthetic.t))=?,
        ~selected: option(bool)=?,
        ~textColor: option(TextColor.t)=?,
        ~value: 'a=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "classes": fromOption(classes),
            "className": fromOption(className),
            "disabled": unwrap_bool(disabled),
            "fullWidth": unwrap_bool(fullWidth),
            "icon": fromOption(icon),
            "indicator": fromOption(indicator),
            "label": fromOption(label),
            "onChange": fromOption(onChange),
            "onClick": fromOption(onClick),
            "selected": unwrap_bool(selected),
            "textColor":
              fromOption(option_map(TextColor.to_string, textColor)),
            "value": fromOption(value),
            "style": fromOption(style),
          }
        ),
      children,
    );
};

module TabScrollButton = {
  module Direction = {
    type t =
      | Left
      | Right;
    let to_string =
      fun
      | Left => "left"
      | Right => "right";
  };
  [@bs.module "material-ui/Tabs"]
  external reactClass : ReasonReact.reactClass = "TabScrollButton";
  let make =
      (
        ~classes: option(Js.t({..}))=?,
        ~className: option(string)=?,
        ~direction: option(Direction.t)=?,
        ~onClick: option(ReasonReact.Callback.t(ReactEventRe.Mouse.t))=?,
        ~visible: option(bool)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "classes": fromOption(classes),
            "className": fromOption(className),
            "direction":
              fromOption(option_map(Direction.to_string, direction)),
            "onClick": fromOption(onClick),
            "visible": unwrap_bool(visible),
            "style": fromOption(style),
          }
        ),
      children,
    );
};

module Tabs = {
  module IndicatorColor = {
    type t =
      | Accent
      | Primary;
    let to_string =
      fun
      | Accent => "accent"
      | Primary => "primary";
  };
  module ScrollButtons = {
    type t =
      | Auto
      | On
      | Off;
    let to_string =
      fun
      | Auto => "auto"
      | On => "on"
      | Off => "off";
  };
  module TextColor = {
    type t =
      | Accent
      | Primary
      | Inherit;
    let to_string =
      fun
      | Accent => "accent"
      | Primary => "primary"
      | Inherit => "inherit";
  };
  [@bs.module "material-ui/Tabs"]
  external reactClass : ReasonReact.reactClass = "default";
  let make =
      (
        ~buttonClassName: option(string)=?,
        ~centered: option(bool)=?,
        ~classes: option(Js.t({..}))=?,
        ~className: option(string)=?,
        ~fullWidth: option(bool)=?,
        ~indicatorClassName: option(string)=?,
        /* TODO:  Allow for string as well */
        ~indicatorColor: option(IndicatorColor.t)=?,
        ~onChange: option((ReactEventRe.Synthetic.t, int) => unit)=?,
        ~scrollable: option(bool)=?,
        ~scrollButtons: option(ScrollButtons.t)=?,
        ~_TabScrollButton: option(ReasonReact.reactElement)=?,
        ~textColor: option(TextColor.t)=?,
        ~value: 'a=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "buttonClassName": fromOption(buttonClassName),
            "centered": unwrap_bool(centered),
            "classes": fromOption(classes),
            "className": fromOption(className),
            "fullWidth": unwrap_bool(fullWidth),
            "indicatorClassName": fromOption(indicatorClassName),
            "indicatorColor":
              fromOption(
                option_map(IndicatorColor.to_string, indicatorColor),
              ),
            "onChange": fromOption(onChange),
            "scrollable": unwrap_bool(scrollable),
            "scrollButtons":
              fromOption(option_map(ScrollButtons.to_string, scrollButtons)),
            "TabScrollButton": fromOption(_TabScrollButton),
            "textColor":
              fromOption(option_map(TextColor.to_string, textColor)),
            "value": fromOption(value),
            "style": fromOption(style),
          }
        ),
      children,
    );
};

module TableBody = {
  [@bs.module "material-ui/Table"]
  external toolbar : ReasonReact.reactClass = "TableBody";
  let make =
      (
        ~classes: option(Js.t({..}))=?,
        ~className: option(string)=?,
        ~component: option(string)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=toolbar,
      ~props=
        Js.Nullable.(
          {
            "classes": fromOption(classes),
            "className": fromOption(className),
            "component": fromOption(component),
            "style": fromOption(style),
          }
        ),
      children,
    );
};

module TableCell = {
  module Padding = {
    type t =
      | Default
      | Checkbox
      | Dense
      | None;
    let to_string =
      fun
      | Default => "default"
      | Checkbox => "checkbox"
      | Dense => "dense"
      | None => "none";
  };
  [@bs.module "material-ui/Table"]
  external toolbar : ReasonReact.reactClass = "TableCell";
  let make =
      (
        ~classes: option(Js.t({..}))=?,
        ~className: option(string)=?,
        ~component: option(string)=?,
        ~numeric: option(bool)=?,
        ~padding: option(Padding.t)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=toolbar,
      ~props=
        Js.Nullable.(
          {
            "classes": fromOption(classes),
            "className": fromOption(className),
            "component": fromOption(component),
            "numeric": unwrap_bool(numeric),
            "padding": fromOption(option_map(Padding.to_string, padding)),
            "style": fromOption(style),
          }
        ),
      children,
    );
};

module TableFooter = {
  [@bs.module "material-ui/Table"]
  external toolbar : ReasonReact.reactClass = "TableFooter";
  let make =
      (
        ~classes: option(Js.t({..}))=?,
        ~className: option(string)=?,
        ~component: option(string)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=toolbar,
      ~props=
        Js.Nullable.(
          {
            "classes": fromOption(classes),
            "className": fromOption(className),
            "component": fromOption(component),
            "style": fromOption(style),
          }
        ),
      children,
    );
};

module TableHead = {
  [@bs.module "material-ui/Table"]
  external toolbar : ReasonReact.reactClass = "TableHead";
  let make =
      (
        ~classes: option(Js.t({..}))=?,
        ~className: option(string)=?,
        ~component: option(string)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=toolbar,
      ~props=
        Js.Nullable.(
          {
            "classes": fromOption(classes),
            "className": fromOption(className),
            "component": fromOption(component),
            "style": fromOption(style),
          }
        ),
      children,
    );
};

module TableRow = {
  [@bs.module "material-ui/Table"]
  external toolbar : ReasonReact.reactClass = "TableRow";
  let make =
      (
        ~classes: option(Js.t({..}))=?,
        ~className: option(string)=?,
        ~component: option(string)=?,
        ~hover: option(bool)=?,
        ~selected: option(bool)=?,
        ~style: option(ReactDOMRe.style)=?,
        ~onClick: option(ReactEventRe.Mouse.t => unit)=?,
        ~onDoubleClick: option(ReactEventRe.Mouse.t => unit)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=toolbar,
      ~props=
        Js.Nullable.(
          {
            "classes": fromOption(classes),
            "className": fromOption(className),
            "component": fromOption(component),
            "hover": unwrap_bool(hover),
            "selected": unwrap_bool(selected),
            "style": fromOption(style),
            "onClick": fromOption(onClick),
            "onDoubleClick": fromOption(onDoubleClick),
          }
        ),
      children,
    );
};

module Table = {
  [@bs.module "material-ui/Table"]
  external toolbar : ReasonReact.reactClass = "default";
  let make =
      (
        ~classes: option(Js.t({..}))=?,
        ~className: option(string)=?,
        ~component: option(string)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=toolbar,
      ~props=
        Js.Nullable.(
          {
            "classes": fromOption(classes),
            "className": fromOption(className),
            "component": fromOption(component),
            "style": fromOption(style),
          }
        ),
      children,
    );
};

module TextField = {
  [@bs.module "material-ui/TextField"]
  external reactClass : ReasonReact.reactClass = "default";
  let make =
      (
        ~autoComplete: option(string)=?,
        ~autoFocus: option(bool)=?,
        ~className: option(string)=?,
        ~defaultValue: option(string)=?,
        ~disabled: option(bool)=?,
        ~error: option(bool)=?,
        ~_FormHelperTextProps: option(Js.t({..}))=?,
        ~fullWidth: option(bool)=?,
        /* TODO: change type to match Node */
        ~helperText: option(string)=?,
        ~helperTextClassName: option(string)=?,
        ~id: option(string)=?,
        ~_InputLabelProps: option(Js.t({..}))=?,
        ~inputProps: option(Js.t({..}))=?,
        ~_InputProps: option(Js.t({..}))=?,
        /* TODO: change type to match ref callback (see https://reasonml.github.io/reason-react/docs/en/react-ref.html) */
        ~inputRef=?,
        /* TODO: change type to match Node */
        ~label: option(string)=?,
        ~labelClassName: option(string)=?,
        ~multiline: option(bool)=?,
        ~name: option(string)=?,
        ~onChange: option(ReactEventRe.Form.t => unit)=?,
        ~placeholder: option(string)=?,
        ~required: option(bool)=?,
        /* TODO: change type to match ref callback (see https://reasonml.github.io/reason-react/docs/en/react-ref.html) */
        ~rootRef=?,
        ~rows: option([ | `Int(int) | `String(string)])=?,
        ~rowsMax: option([ | `Int(int) | `String(string)])=?,
        ~select: option(bool)=?,
        ~_SelectProps: option(Js.t({..}))=?,
        ~_type: option(string)=?,
        ~value: option([ | `Int(int) | `String(string) | `Float(float)])=?,
        ~margin: option(Margin.t)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "autoComplete": fromOption(autoComplete),
            "autoFocus": unwrap_bool(autoFocus),
            "className": fromOption(className),
            "defaultValue": fromOption(defaultValue),
            "disabled": unwrap_bool(disabled),
            "error": unwrap_bool(error),
            "FormHelperTextProps": fromOption(_FormHelperTextProps),
            "fullWidth": unwrap_bool(fullWidth),
            "helperText": fromOption(helperText),
            "helperTextClassName": fromOption(helperTextClassName),
            "id": fromOption(id),
            "InputLabelProps": fromOption(_InputLabelProps),
            "inputProps": fromOption(inputProps),
            "InputProps": fromOption(_InputProps),
            "inputRef": fromOption(inputRef),
            "label": fromOption(label),
            "labelClassName": fromOption(labelClassName),
            "multiline": unwrap_bool(multiline),
            "name": fromOption(name),
            "onChange": fromOption(onChange),
            "placeholder": fromOption(placeholder),
            "required": unwrap_bool(required),
            "rootRef": fromOption(rootRef),
            "rows": fromOption(option_map(unwrapValue, rows)),
            "rowsMax": fromOption(option_map(unwrapValue, rowsMax)),
            "select": unwrap_bool(select),
            "SelectProps": fromOption(_SelectProps),
            "type": fromOption(_type),
            "value": fromOption(option_map(unwrapValue, value)),
            "margin": fromOption(option_map(Margin.to_string, margin)),
            "style": fromOption(style),
          }
        ),
      children,
    );
};

module Toolbar = {
  [@bs.module "material-ui/Toolbar"]
  external toolbar : ReasonReact.reactClass = "default";
  let make =
      (
        ~classes: option(Js.t({..}))=?,
        ~className: option(string)=?,
        ~disableGutters=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=toolbar,
      ~props=
        Js.Nullable.(
          {
            "classes": fromOption(classes),
            "className": fromOption(className),
            "disableGutters": unwrap_bool(disableGutters),
            "style": fromOption(style),
          }
        ),
      children,
    );
};

module Tooltip = {
  module Placement = {
    type t =
      | BottomEnd
      | BottomStart
      | Bottom
      | LeftEnd
      | LeftStart
      | Left
      | RightEnd
      | RightStart
      | Right
      | TopEnd
      | TopStart
      | Top;
    let to_string =
      fun
      | BottomEnd => "bottom-end"
      | BottomStart => "bottom-start"
      | Bottom => "bottom"
      | LeftEnd => "left-end"
      | LeftStart => "left-start"
      | Left => "left"
      | RightEnd => "right-end"
      | RightStart => "right-start"
      | Right => "right"
      | TopEnd => "top-end"
      | TopStart => "top-start"
      | Top => "top";
  };
  [@bs.module "material-ui/Tooltip"]
  external toolbar : ReasonReact.reactClass = "default";
  let make =
      (
        ~classes: option(Js.t({..}))=?,
        ~className: option(string)=?,
        ~disableTriggerFocus: option(bool)=?,
        ~disableTriggerHover: option(bool)=?,
        ~disableTriggerTouch: option(bool)=?,
        ~id: option(string)=?,
        ~onClose: option(unit => unit)=?,
        ~onOpen: option(unit => unit)=?,
        ~_open: option(bool)=?,
        /* TODO: is actually a Node */
        ~title: option(string)=?,
        ~enterDelay: option(int)=?,
        ~leaveDelay: option(int)=?,
        ~placement: option(Placement.t)=?,
        ~popperProps: option(Js.t({..}))=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=toolbar,
      ~props=
        Js.Nullable.(
          {
            "classes": fromOption(classes),
            "className": fromOption(className),
            "disableTriggerFocus": unwrap_bool(disableTriggerFocus),
            "disableTriggerHover": unwrap_bool(disableTriggerHover),
            "disableTriggerTouch": unwrap_bool(disableTriggerTouch),
            "id": fromOption(id),
            "onClose": fromOption(onClose),
            "onOpen": fromOption(onOpen),
            "open": unwrap_bool(_open),
            "title": fromOption(title),
            "enterDelay": fromOption(enterDelay),
            "leaveDelay": fromOption(leaveDelay),
            "placement":
              fromOption(option_map(Placement.to_string, placement)),
            "PopperProps": fromOption(popperProps),
            "style": fromOption(style),
          }
        ),
      children,
    );
};

module Typography = {
  module Color = {
    type t =
      | Default
      | Inherit
      | Primary
      | Contrast
      | Accent
      | Error;
    let to_string =
      fun
      | Default => "default"
      | Inherit => "inherit"
      | Primary => "primary"
      | Contrast => "contrast"
      | Accent => "accent"
      | Error => "error";
  };
  module Align = {
    type t =
      | Inherit
      | Left
      | Center
      | Right
      | Justify;
    let to_string =
      fun
      | Inherit => "inherit"
      | Left => "left"
      | Center => "center"
      | Right => "right"
      | Justify => "justify";
  };
  [@bs.module "material-ui/Typography"]
  external typography : ReasonReact.reactClass = "default";
  let make =
      (
        ~align: option(Align.t)=?,
        ~classes: option(Js.t({..}))=?,
        ~className: option(string)=?,
        ~component: option(string)=?,
        ~color: option(Color.t)=?,
        ~gutterBottom: option(bool)=?,
        ~headlineMapping: option(Js.t({..}))=?,
        ~noWrap: option(bool)=?,
        ~paragraph: option(bool)=?,
        ~_type: option(string)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=typography,
      ~props=
        Js.Nullable.(
          {
            "align": fromOption(option_map(Align.to_string, align)),
            "classes": fromOption(classes),
            "className": fromOption(className),
            "component": fromOption(component),
            "color": fromOption(option_map(Color.to_string, color)),
            "gutterBottom": unwrap_bool(gutterBottom),
            "headlineMapping": fromOption(headlineMapping),
            "noWrap": unwrap_bool(noWrap),
            "paragraph": unwrap_bool(paragraph),
            "type": fromOption(_type),
            "style": fromOption(style),
          }
        ),
      children,
    );
};
