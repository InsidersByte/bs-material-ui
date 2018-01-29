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
      ]
    ) =>
  switch r {
  | `String(s) => toJsUnsafe(s)
  | `Int(i) => toJsUnsafe(i)
  | `StringArray(a) => toJsUnsafe(a)
  | `IntArray(a) => toJsUnsafe(a)
  | `Float(a) => toJsUnsafe(a)
  | `FloatArray(a) => toJsUnsafe(a)
  };

let unwrap_bool = (b: option(bool)) =>
  switch b {
  | Some(value) => Js.Nullable.return(Js.Boolean.to_js_boolean(value))
  | None => Js.Nullable.undefined
  };

let option_map = (fn, option) =>
  switch option {
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
  [@bs.module "material-ui/Badge"]
  external reactClass : ReasonReact.reactClass = "default";
  let make =
      (
        ~badgeContent: array(ReasonReact.reactElement),
        ~style: option(ReactDOMRe.style)=?,
        children
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.({"badgeContent": badgeContent, "style": from_opt(style)}),
      children
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
        children
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "classes": from_opt(classes),
            "focusRipple": unwrap_bool(focusRipple),
            "centerRipple": unwrap_bool(centerRipple),
            "disableRipple": unwrap_bool(disableRipple),
            "disabled": unwrap_bool(disabled),
            "onClick": from_opt(onClick),
            "component": from_opt(component),
            "className": from_opt(className),
            "style": from_opt(style)
          }
        ),
      children
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
        children
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "classes": from_opt(classes),
            "className": from_opt(className),
            "color": from_opt(option_map(Color.to_string, color)),
            "component": from_opt(component),
            "dense": unwrap_bool(dense),
            "disabled": unwrap_bool(disabled),
            "disableFocusRipple": unwrap_bool(disableFocusRipple),
            "disableRipple": unwrap_bool(disableRipple),
            "fab": unwrap_bool(fab),
            "href": from_opt(href),
            "raised": unwrap_bool(raised),
            "type": from_opt(_type),
            "onClick": from_opt(onClick),
            "style": from_opt(style),
            "centerRipple": unwrap_bool(centerRipple),
            "focusRipple": unwrap_bool(focusRipple)
          }
        ),
      children
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
            "style": from_opt(style)
          }
        ),
      children
    );
};

module CardContent = {
  [@bs.module "material-ui/Card"]
  external reactClass : ReasonReact.reactClass = "CardContent";
  let make = (~style: option(ReactDOMRe.style)=?, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=Js.Nullable.({"style": from_opt(style)}),
      children
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
        children
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "action": from_opt(action),
            "avatar": from_opt(avatar),
            "classes": from_opt(classes),
            "className": from_opt(className),
            "style": from_opt(style),
            "subheader": from_opt(subheader),
            "title": from_opt(title)
          }
        ),
      children
    );
};

module CardMedia = {
  [@bs.module "material-ui/Card"]
  external reactClass : ReasonReact.reactClass = "CardMedia";
  let make =
      (~style: option(ReactDOMRe.style)=?, ~image: option(string)=?, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.({"style": from_opt(style), "image": from_opt(image)}),
      children
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
        children
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "raised": unwrap_bool(raised),
            "style": from_opt(style),
            "className": from_opt(className)
          }
        ),
      children
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
        children
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "classes": from_opt(classes),
            "className": from_opt(className),
            "checked": unwrap_bool(checked),
            "checkedClassName": from_opt(checkedClassName),
            "checkedIcon": from_opt(checkedIcon),
            "disableRipple": unwrap_bool(disableRipple),
            "disabled": unwrap_bool(disabled),
            "disabledClassName": from_opt(disabledClassName),
            "icon": from_opt(icon),
            "indeterminate": unwrap_bool(indeterminate),
            "indeterminateIcon": from_opt(indeterminateIcon),
            "name": from_opt(name),
            "onChange": from_opt(onChange),
            "value": from_opt(value),
            "style": from_opt(style)
          }
        ),
      children
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
        children
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "avatar": from_opt(avatar),
            "className": from_opt(className),
            "classes": from_opt(classes),
            "deleteIcon": from_opt(deleteIcon),
            "label": from_opt(label),
            "onClick": from_opt(onClick),
            "onKeyDown": from_opt(onKeyDown),
            "onDelete": from_opt(onDelete),
            "style": from_opt(style),
            "tabIndex": from_opt(option_map(unwrapValue, tabIndex))
          }
        ),
      children
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
  [@bs.module "material-ui/transitions/Collapse"]
  external reactClass : ReasonReact.reactClass = "default";
  let make =
      (
        ~expanded: option(bool)=?,
        ~transitionDuration: option(string)=?,
        children
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "in": unwrap_bool(expanded),
            "transitionDuration": from_opt(transitionDuration)
          }
        ),
      children
    );
};

module DialogActions = {
  [@bs.module "material-ui/Dialog"]
  external reactClass : ReasonReact.reactClass = "DialogActions";
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

module DialogContentText = {
  [@bs.module "material-ui/Dialog"]
  external reactClass : ReasonReact.reactClass = "DialogContentText";
  let make = (~style: option(ReactDOMRe.style)=?, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=Js.Nullable.({"style": from_opt(style)}),
      children
    );
};

module DialogContent = {
  [@bs.module "material-ui/Dialog"]
  external reactClass : ReasonReact.reactClass = "DialogContent";
  type dialogContentClasses = {root: option(string)};
  let make = (~classes: option(dialogContentClasses)=?, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=Js.Nullable.({"classes": from_opt(classes)}),
      children
    );
};

module DialogTitle = {
  [@bs.module "material-ui/Dialog"]
  external reactClass : ReasonReact.reactClass = "DialogTitle";
  type dialogTitleClasses = {root: option(string)};
  let make =
      (
        ~classes: option(dialogTitleClasses)=?,
        ~disableTypography: option(bool)=?,
        children
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "classes": from_opt(classes),
            "disableTypography": from_opt(disableTypography)
          }
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
  [@bs.module "material-ui/Dialog"]
  external reactClass : ReasonReact.reactClass = "default";
  let make =
      (
        ~classes: option(dialogClasses)=?,
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
        children
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "classes": from_opt(classes),
            "className": from_opt(className),
            "disableBackdropClick": from_opt(disableBackdropClick),
            "disableEscapeKeyUp": from_opt(disableEscapeKeyUp),
            "fullScreen": from_opt(fullScreen),
            "fullWidth": from_opt(fullWidth),
            "onBackdropClick": from_opt(onBackdropClick),
            "onClose": from_opt(onClose),
            "onEnter": from_opt(onEnter),
            "onEntered": from_opt(onEntered),
            "onEntering": from_opt(onEntering),
            "onEscapeKeyUp": from_opt(onEscapeKeyUp),
            "onExit": from_opt(onExit),
            "onExited": from_opt(onExited),
            "onExiting": from_opt(onExiting),
            "open": from_opt(_open),
            "style": from_opt(style)
          }
        ),
      children
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
        children
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "light": unwrap_bool(light),
            "inset": unwrap_bool(inset),
            "absolute": unwrap_bool(absolute),
            "className": from_opt(className)
          }
        ),
      children
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
        children
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "anchor": from_opt(option_map(Anchor.to_string, anchor)),
            "classes": from_opt(classes),
            "className": from_opt(className),
            "elevation": from_opt(elevation),
            "transitionDuration": from_opt(transitionDuration),
            "ModalProps": from_opt(modalProps),
            "onClose": from_opt(onClose),
            "open": unwrap_bool(_open),
            "SlideProps": from_opt(slideProps),
            "type": from_opt(option_map(Type.to_string, _type)),
            "style": from_opt(style)
          }
        ),
      children
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
        children
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "classes": from_opt(classes),
            "className": from_opt(className),
            "component": from_opt(component),
            "disabled": unwrap_bool(disabled),
            "error": unwrap_bool(error),
            "fullWidth": unwrap_bool(fullWidth),
            "onBlur": from_opt(onBlur),
            "onFocus": from_opt(onFocus),
            "required": unwrap_bool(required),
            "margin": from_opt(option_map(Margin.to_string, margin)),
            "style": from_opt(style)
          }
        ),
      children
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
        children
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "checked": from_opt(checked),
            "classes": from_opt(classes),
            "className": from_opt(className),
            "control": from_opt(control),
            "disabled": unwrap_bool(disabled),
            "inputRef": from_opt(inputRef),
            "label": from_opt(label),
            "name": from_opt(name),
            "onChange": from_opt(onChange),
            "value": from_opt(value),
            "style": from_opt(style)
          }
        ),
      children
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
        children
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "classes": from_opt(classes),
            "className": from_opt(className),
            "row": unwrap_bool(row),
            "style": from_opt(style)
          }
        ),
      children
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
        children
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "classes": from_opt(classes),
            "className": from_opt(className),
            "disabled": unwrap_bool(disabled),
            "error": unwrap_bool(error),
            "margin": from_opt(option_map(Margin.to_string, margin)),
            "style": from_opt(style)
          }
        ),
      children
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
        children
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "classes": from_opt(classes),
            "className": from_opt(className),
            "component": from_opt(component),
            "disabled": unwrap_bool(disabled),
            "error": unwrap_bool(error),
            "focused": unwrap_bool(focused),
            "required": unwrap_bool(required),
            "style": from_opt(style)
          }
        ),
      children
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
        children
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "container": unwrap_bool(container),
            "item": unwrap_bool(item),
            "style": from_opt(style),
            "className": from_opt(className),
            "align": from_opt(align),
            "component": from_opt(component),
            "direction": from_opt(direction),
            "wrap": from_opt(wrap),
            "justify": from_opt(justify),
            "xl": from_opt(xl),
            "lg": from_opt(lg),
            "md": from_opt(md),
            "sm": from_opt(sm),
            "xs": from_opt(xs),
            "spacing": from_opt(spacing),
            "wrp": from_opt(wrap)
          }
        ),
      children
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
        children
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "classes": from_opt(classes),
            "className": from_opt(className),
            "color": from_opt(option_map(Color.to_string, color)),
            "disableRipple": unwrap_bool(disableRipple),
            "disabled": unwrap_bool(disabled),
            "style": from_opt(style),
            "onClick": from_opt(onClick)
          }
        ),
      children
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
        children
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "classes": from_opt(classes),
            "className": from_opt(className),
            "disableAnimation": unwrap_bool(disableAnimation),
            "disabled": unwrap_bool(disabled),
            "error": unwrap_bool(error),
            "FormControlClasses": from_opt(_FormControlClasses),
            "focused": unwrap_bool(focused),
            "htmlFor": from_opt(htmlFor),
            "margin": from_opt(option_map(Margin.to_string, margin)),
            "required": unwrap_bool(required),
            "shrink": unwrap_bool(shrink),
            "style": from_opt(style)
          }
        ),
      children
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
        children
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "disableUnderline": unwrap_bool(disableUnderline),
            "disabled": unwrap_bool(disabled),
            "error": unwrap_bool(error),
            "id": from_opt(id),
            "fullWidth": unwrap_bool(fullWidth),
            "autoFocus": unwrap_bool(autoFocus),
            "style": from_opt(style),
            "placeholder": from_opt(placeholder),
            "className": from_opt(className),
            "type": from_opt(inputType),
            "value": from_opt(value),
            "onChange": from_opt(onChange)
          }
        ),
      children
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
            "className": from_opt(className)
          }
        ),
      children
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
        children
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "classes": from_opt(classes),
            "style": from_opt(style),
            "className": from_opt(className)
          }
        ),
      children
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
        children
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "classes": from_opt(classes),
            "style": from_opt(style),
            "className": from_opt(className)
          }
        ),
      children
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
        children
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "classes": from_opt(classes),
            "style": from_opt(style),
            "className": from_opt(className)
          }
        ),
      children
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
        children
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "classes": from_opt(classes),
            "className": from_opt(className),
            "disableTypography": unwrap_bool(disableTypography),
            "inset": unwrap_bool(inset),
            "primary": from_opt(primary),
            "secondary": from_opt(secondary),
            "style": from_opt(style)
          }
        ),
      children
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
        children
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "button": unwrap_bool(button),
            "classes": from_opt(classes),
            "className": from_opt(className),
            "component": from_opt(component),
            "dense": unwrap_bool(dense),
            "disabled": unwrap_bool(disabled),
            "disableGutters": unwrap_bool(disableGutters),
            "divider": unwrap_bool(divider),
            "style": from_opt(style),
            "onClick": from_opt(onClick),
            "href": from_opt(href)
          }
        ),
      children
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
        children
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "classes": from_opt(classes),
            "className": from_opt(className),
            "color": from_opt(option_map(Color.to_string, color)),
            "disableSticky": unwrap_bool(disableSticky),
            "inset": unwrap_bool(inset),
            "style": from_opt(style)
          }
        ),
      children
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
        children
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "classes": from_opt(classes),
            "className": from_opt(className),
            "component": from_opt(component),
            "dense": unwrap_bool(dense),
            "disablePadding": unwrap_bool(disablePadding),
            "subheader": from_opt(subheader),
            "style": from_opt(style)
          }
        ),
      children
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
        children
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "classes": from_opt(classes),
            "className": from_opt(className),
            "component": from_opt(component),
            "role": from_opt(role),
            "selected": unwrap_bool(selected),
            "onClick": from_opt(onClick),
            "style": from_opt(style),
            "value": from_opt(option_map(unwrapValue, value))
          }
        ),
      children
    );
};

module Menu = {
  module TransitionDuration = {
    type t =
      | Auto;
    let to_string =
      fun
      | Auto => "auto";
  };
  module AnchorReference = {
    type t =
      | AnchorEl
      | AnchorPosition;
    let to_string =
      fun
      | AnchorEl => "anchorEl"
      | AnchorPosition => "anchorPosition";
  };
  module Classes = {
    type classesType =
      | Paper(string);
    type t = list(classesType);
    let to_string =
      fun
      | Paper(_) => "paper";
    let to_obj = (listOfClasses) =>
      listOfClasses
      |> StdLabels.List.fold_left(
           ~f=
             (obj, classType) => {
               switch classType {
               | Paper(className) => Js.Dict.set(obj, to_string(classType), className)
               };
               obj
             },
           ~init=Js.Dict.empty()
         );
  };
  [@bs.module "material-ui/Menu"] external reactClass : ReasonReact.reactClass = "default";
  let make =
      (
        ~transitionDuration:
        option(
          [
            | `Enum(TransitionDuration.t)
            | `Float(int)
            | `Object({. "enter": int, "exit": int})
          ]
        )=?,
     ~_PopoverClasses: option(Js.t({..}))=?,
     ~_PaperProps: option(Js.t({..}))=?,
     ~_open: option(bool),
     ~onClose: option(ReactEventRe.Synthetic.t => unit )=?,
     ~onExited: option(ReactEventRe.Transition.t => unit)=?,
     ~onExiting: option(ReactEventRe.Transition.t => unit)=?,
     ~onExit: option(ReactEventRe.Transition.t => unit)=?,
     ~onEntered: option(ReactEventRe.Transition.t => unit)=?,
     ~onEntering: option(ReactEventRe.Transition.t => unit)=?,
     ~onEnter: option(ReactEventRe.Transition.t => unit)=?,
     ~_MenuListProps: option(Js.t({..}))=?,
     ~anchorEl: option(Js.t({..}))=?,
     ~classes: option(Classes.t)=?,
     ~anchorPosition: option({. "top": int, "left": int})=?,
     ~anchorReference: option(AnchorReference.t)=?,
     ~anchorOrigin: option({. "horizontal": _, "vertical": _})=?,
     ~elevation: option(float)=?,
     ~getContentAnchorEl: option('a)=?,
     ~marginThreshold: option(float)=?,
     ~role: option(string)=?,
     ~transformOrigin: option({. "horizontal": _, "vertical": _})=?,
     ~transitionClasses:
        option(
          [
            | `String(string)
            | `Object(
                {
                  .
                  "appear": string,
                  "appearActive": string,
                  "enter": string,
                  "enterActive": string,
                  "exit": string,
                  "exitActive": string
                }
              )
          ]
        )=?,
      ~style: option(ReactDOMRe.style)
     children
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "transitionDuration": from_opt(
              optionMap(
                fun
                | `Enum(e) => unwrapValue(`String(TransitionDuration.to_string(e)))
                | x => unwrapValue(x),
                transitionDuration
              )
            ),
          "PopoverClasses": from_opt(_PopoverClasses),
          "PaperProps": from_opt(_PaperProps),
          "open": from_opt(optionMap(Js.Boolean.to_js_boolean, _open)),
          "onRequestClose": from_opt(onRequestClose),
          "onExited": from_opt(onExited),
          "onExiting": from_opt(onExiting),
          "onExit": from_opt(onExit),
          "onEntered": from_opt(onEntered),
          "onEntering": from_opt(onEntering),
          "onEnter": from_opt(onEnter),
          "MenuListProps": from_opt(_MenuListProps),
          "anchorEl": from_opt(anchorEl),
          "theme": from_opt(theme),
          "classes": from_opt(optionMap(Classes.to_obj, classes)),
          "anchorPosition": from_opt(anchorPosition),
          "anchorReference":
            from_opt(optionMap(AnchorReference.to_string, anchorReference)),
          "anchorOrigin": from_opt(anchorOrigin),
          "elevation": from_opt(elevation),
          "getContentAnchorEl": from_opt(getContentAnchorEl),
          "marginThreshold": from_opt(marginThreshold),
          "role": from_opt(role),
          "transformOrigin": from_opt(transformOrigin),
          "transitionClasses": from_opt(optionMap(unwrapValue, transitionClasses)),
          "style": from_opt(style)
          }
        ),
      children
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
        children
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=toolbar,
      ~props=
        Js.Nullable.(
          {
            "classes": from_opt(classes),
            "className": from_opt(className),
            "component": from_opt(component),
            "elevation": from_opt(elevation),
            "square": unwrap_bool(square),
            "style": from_opt(style)
          }
        ),
      children
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
             ]
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
        children
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "autoWidth": unwrap_bool(autoWidth),
            "classes": from_opt(classes),
            "className": from_opt(className),
            "displayEmpty": unwrap_bool(displayEmpty),
            "input": from_opt(input),
            "InputClasses": from_opt(inputClasses),
            "native": unwrap_bool(native),
            "multiple": unwrap_bool(multiple),
            "MenuProps": from_opt(menuProps),
            "value": from_opt(option_map(unwrapValue, value)),
            "style": from_opt(style),
            /* TODO: Input Props: find a way to rectactor props duplication. */
            "disableUnderline": unwrap_bool(disableUnderline),
            "disabled": unwrap_bool(disabled),
            "error": unwrap_bool(error),
            "fullWidth": unwrap_bool(fullWidth),
            "autoFocus": unwrap_bool(autoFocus),
            "placeholder": from_opt(placeholder),
            "type": from_opt(inputType),
            "onChange": from_opt(onChange)
          }
        ),
      children
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
        children
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "classes": from_opt(classes),
            "className": from_opt(className),
            "disabled": unwrap_bool(disabled),
            "fullWidth": unwrap_bool(fullWidth),
            "icon": from_opt(icon),
            "indicator": from_opt(indicator),
            "label": from_opt(label),
            "onChange": from_opt(onChange),
            "onClick": from_opt(onClick),
            "selected": unwrap_bool(selected),
            "textColor": from_opt(option_map(TextColor.to_string, textColor)),
            "value": from_opt(value),
            "style": from_opt(style)
          }
        ),
      children
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
        children
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "classes": from_opt(classes),
            "className": from_opt(className),
            "direction": from_opt(option_map(Direction.to_string, direction)),
            "onClick": from_opt(onClick),
            "visible": unwrap_bool(visible),
            "style": from_opt(style)
          }
        ),
      children
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
        children
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "buttonClassName": from_opt(buttonClassName),
            "centered": unwrap_bool(centered),
            "classes": from_opt(classes),
            "className": from_opt(className),
            "fullWidth": unwrap_bool(fullWidth),
            "indicatorClassName": from_opt(indicatorClassName),
            "indicatorColor":
              from_opt(option_map(IndicatorColor.to_string, indicatorColor)),
            "onChange": from_opt(onChange),
            "scrollable": unwrap_bool(scrollable),
            "scrollButtons":
              from_opt(option_map(ScrollButtons.to_string, scrollButtons)),
            "TabScrollButton": from_opt(_TabScrollButton),
            "textColor": from_opt(option_map(TextColor.to_string, textColor)),
            "value": from_opt(value),
            "style": from_opt(style)
          }
        ),
      children
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
        children
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=toolbar,
      ~props=
        Js.Nullable.(
          {
            "classes": from_opt(classes),
            "className": from_opt(className),
            "component": from_opt(component),
            "style": from_opt(style)
          }
        ),
      children
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
        children
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=toolbar,
      ~props=
        Js.Nullable.(
          {
            "classes": from_opt(classes),
            "className": from_opt(className),
            "component": from_opt(component),
            "numeric": unwrap_bool(numeric),
            "padding": from_opt(option_map(Padding.to_string, padding)),
            "style": from_opt(style)
          }
        ),
      children
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
        children
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=toolbar,
      ~props=
        Js.Nullable.(
          {
            "classes": from_opt(classes),
            "className": from_opt(className),
            "component": from_opt(component),
            "style": from_opt(style)
          }
        ),
      children
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
        children
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=toolbar,
      ~props=
        Js.Nullable.(
          {
            "classes": from_opt(classes),
            "className": from_opt(className),
            "component": from_opt(component),
            "style": from_opt(style)
          }
        ),
      children
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
        children
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=toolbar,
      ~props=
        Js.Nullable.(
          {
            "classes": from_opt(classes),
            "className": from_opt(className),
            "component": from_opt(component),
            "hover": unwrap_bool(hover),
            "selected": unwrap_bool(selected),
            "style": from_opt(style),
            "onClick": from_opt(onClick),
            "onDoubleClick": from_opt(onDoubleClick)
          }
        ),
      children
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
        children
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=toolbar,
      ~props=
        Js.Nullable.(
          {
            "classes": from_opt(classes),
            "className": from_opt(className),
            "component": from_opt(component),
            "style": from_opt(style)
          }
        ),
      children
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
        children
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "autoComplete": from_opt(autoComplete),
            "autoFocus": unwrap_bool(autoFocus),
            "className": from_opt(className),
            "defaultValue": from_opt(defaultValue),
            "disabled": unwrap_bool(disabled),
            "error": unwrap_bool(error),
            "FormHelperTextProps": from_opt(_FormHelperTextProps),
            "fullWidth": unwrap_bool(fullWidth),
            "helperText": from_opt(helperText),
            "helperTextClassName": from_opt(helperTextClassName),
            "id": from_opt(id),
            "InputLabelProps": from_opt(_InputLabelProps),
            "inputProps": from_opt(inputProps),
            "InputProps": from_opt(_InputProps),
            "inputRef": from_opt(inputRef),
            "label": from_opt(label),
            "labelClassName": from_opt(labelClassName),
            "multiline": unwrap_bool(multiline),
            "name": from_opt(name),
            "onChange": from_opt(onChange),
            "placeholder": from_opt(placeholder),
            "required": unwrap_bool(required),
            "rootRef": from_opt(rootRef),
            "rows": from_opt(option_map(unwrapValue, rows)),
            "rowsMax": from_opt(option_map(unwrapValue, rowsMax)),
            "select": unwrap_bool(select),
            "SelectProps": from_opt(_SelectProps),
            "type": from_opt(_type),
            "value": from_opt(option_map(unwrapValue, value)),
            "margin": from_opt(option_map(Margin.to_string, margin)),
            "style": from_opt(style)
          }
        ),
      children
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
        children
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=toolbar,
      ~props=
        Js.Nullable.(
          {
            "classes": from_opt(classes),
            "className": from_opt(className),
            "disableGutters": unwrap_bool(disableGutters),
            "style": from_opt(style)
          }
        ),
      children
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
        children
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=toolbar,
      ~props=
        Js.Nullable.(
          {
            "classes": from_opt(classes),
            "className": from_opt(className),
            "disableTriggerFocus": unwrap_bool(disableTriggerFocus),
            "disableTriggerHover": unwrap_bool(disableTriggerHover),
            "disableTriggerTouch": unwrap_bool(disableTriggerTouch),
            "id": from_opt(id),
            "onClose": from_opt(onClose),
            "onOpen": from_opt(onOpen),
            "open": unwrap_bool(_open),
            "title": from_opt(title),
            "enterDelay": from_opt(enterDelay),
            "leaveDelay": from_opt(leaveDelay),
            "placement": from_opt(option_map(Placement.to_string, placement)),
            "PopperProps": from_opt(popperProps),
            "style": from_opt(style)
          }
        ),
      children
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
        children
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=typography,
      ~props=
        Js.Nullable.(
          {
            "align": from_opt(option_map(Align.to_string, align)),
            "classes": from_opt(classes),
            "className": from_opt(className),
            "component": from_opt(component),
            "color": from_opt(option_map(Color.to_string, color)),
            "gutterBottom": unwrap_bool(gutterBottom),
            "headlineMapping": from_opt(headlineMapping),
            "noWrap": unwrap_bool(noWrap),
            "paragraph": unwrap_bool(paragraph),
            "type": from_opt(_type),
            "style": from_opt(style)
          }
        ),
      children
    );
};
