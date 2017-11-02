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
            "raised": unwrap_bool(raised),
            "dense": unwrap_bool(dense),
            "disableFocusRipple": unwrap_bool(disableFocusRipple),
            "disableRipple": unwrap_bool(disableRipple),
            "disabled": unwrap_bool(disabled),
            "fab": unwrap_bool(fab),
            "onClick": from_opt(onClick),
            "className": from_opt(className)
          }
        ),
      children
    );
};

module CardActions = {
  [@bs.module "material-ui/Card"] external reactClass : ReasonReact.reactClass = "CardActions";
  let make = (~disableActionSpacing=?, ~style: option(ReactDOMRe.style)=?, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {"disableActionSpacing": unwrap_bool(disableActionSpacing), "style": from_opt(style)}
        ),
      children
    );
};

module CardContent = {
  [@bs.module "material-ui/Card"] external reactClass : ReasonReact.reactClass = "CardContent";
  let make = (~style: option(ReactDOMRe.style)=?, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=Js.Nullable.({"style": from_opt(style)}),
      children
    );
};

module CardHeader = {
  [@bs.module "material-ui/Card"] external reactClass : ReasonReact.reactClass = "CardHeader";
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
  [@bs.module "material-ui/Card"] external reactClass : ReasonReact.reactClass = "CardMedia";
  let make = (~style: option(ReactDOMRe.style)=?, ~image: option(string)=?, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=Js.Nullable.({"style": from_opt(style), "image": from_opt(image)}),
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
            "raised": unwrap_bool(raised),
            "style": from_opt(style),
            "className": from_opt(className)
          }
        ),
      children
    );
};

module Checkbox = {
  [@bs.module "material-ui/Checkbox"] external reactClass : ReasonReact.reactClass = "default";
  let make =
      /* technically a union bool|string but why are you passing a string to `checked`? */
      (
        ~checked: option(bool)=?,
        ~checkedClassName: option(string)=?,
        ~checkedIcon: option(ReasonReact.reactElement)=?,
        /* TODO classes */
        ~disableRipple: option(bool)=?,
        ~disabled: option(bool)=?,
        ~disabledClassName: option(string)=?,
        ~icon: option(ReasonReact.reactElement)=?,
        ~indeterminate: option(bool)=?,
        ~indeterminateIcon: option(ReasonReact.reactElement)=?,
        /* TODO inputProps */
        /* TODO inputRef */
        ~name: option(string)=?,
        ~onChange: option(((ReactEventRe.Selection.t, bool) => unit))=?,
        ~value: option(string)=?,
        children
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "checked": from_opt(checked),
            "checkedClassName": from_opt(checkedClassName),
            "checkedIcon": from_opt(checkedIcon),
            "disableRipple": from_opt(disableRipple),
            "disabled": from_opt(disabled),
            "disabledClassName": from_opt(disabledClassName),
            "icon": from_opt(icon),
            "indeterminate": from_opt(indeterminate),
            "indeterminateIcon": from_opt(indeterminateIcon),
            "name": from_opt(name),
            "onChange": from_opt(onChange),
            "value": from_opt(value)
          }
        ),
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
  [@bs.module "material-ui/Progress"] external reactClass : ReasonReact.reactClass =
    "CircularProgress";
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
          {"in": unwrap_bool(expanded), "transitionDuration": from_opt(transitionDuration)}
        ),
      children
    );
};

module DialogActions = {
  [@bs.module "material-ui/Dialog"] external reactClass : ReasonReact.reactClass = "DialogActions";
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
  [@bs.module "material-ui/Dialog"] external reactClass : ReasonReact.reactClass =
    "DialogContentText";
  let make = (~style: option(ReactDOMRe.style)=?, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=Js.Nullable.({"style": from_opt(style)}),
      children
    );
};

module DialogContent = {
  [@bs.module "material-ui/Dialog"] external reactClass : ReasonReact.reactClass = "DialogContent";
  type dialogContentClasses = {root: option(string)};
  let make = (~classes: option(dialogContentClasses)=?, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=Js.Nullable.({"classes": from_opt(classes)}),
      children
    );
};

module DialogTitle = {
  [@bs.module "material-ui/Dialog"] external reactClass : ReasonReact.reactClass = "DialogTitle";
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
  [@bs.module "material-ui/Drawer"] external reactClass : ReasonReact.reactClass = "default";
  let make =
      (
        ~anchor: option(Anchor.t)=?,
        ~classes: option(Js.t({..}))=?,
        ~className: option(string)=?,
        ~elevation: option(int)=?,
        ~transitionDuration: option(Js.t({..}))=?,
        ~modalProps: option(Js.t({..}))=?,
        ~onRequestClose: option(ReasonReact.Callback.t(unit))=?,
        ~_open: option(bool),
        ~theme: option(Js.t({..}))=?,
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
            "onRequestClose": from_opt(onRequestClose),
            "open": unwrap_bool(_open),
            "theme": from_opt(theme),
            "SlideProps": from_opt(slideProps),
            "type": from_opt(option_map(Type.to_string, _type)),
            "style": from_opt(style)
          }
        ),
      children
    );
};

module FormControl = {
  [@bs.module "material-ui/Form"] external reactClass : ReasonReact.reactClass = "FormControl";
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
            "disabled": unwrap_bool(disabled),
            "error": unwrap_bool(error),
            "fullWidth": unwrap_bool(fullWidth),
            "required": unwrap_bool(required),
            "margin": from_opt(margin),
            "className": from_opt(className),
            "style": from_opt(style)
          }
        ),
      children
    );
};

module FormControlLabel = {
  [@bs.module "material-ui/Form"] external formControlLabel : ReasonReact.reactClass =
    "FormControlLabel";
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
        Js.Nullable.(
          {
            "checked": from_opt(checked),
            "label": from_opt(label),
            "control": from_opt(control),
            "disabled": unwrap_bool(disabled),
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
  [@bs.module "material-ui/Form"] external reactClass : ReasonReact.reactClass = "FormLabel";
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
        Js.Nullable.(
          {
            "disabled": unwrap_bool(disabled),
            "error": unwrap_bool(error),
            "focused": unwrap_bool(focused),
            "required": unwrap_bool(required),
            "margin": from_opt(margin),
            "className": from_opt(className),
            "style": from_opt(style)
          }
        ),
      children
    );
};

module Grid = {
  [@bs.module "material-ui/Grid"] external reactClass : ReasonReact.reactClass = "default";
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
  [@bs.module "material-ui/IconButton"] external reactClass : ReasonReact.reactClass = "default";
  let make =
      (
        ~classes: option(Js.t({..}))=?,
        ~className: option(string)=?,
        ~color: option(Color.t)=?,
        ~disableRipple: option(bool)=?,
        ~disabled: option(bool)=?,
        ~rootRef: option((unit => unit))=?,
        ~style: option(ReactDOMRe.style)=?,
        ~onClick: option((ReactEventRe.Mouse.t => unit))=?,
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
            "rootRef": from_opt(rootRef),
            "style": from_opt(style),
            "onClick": from_opt(onClick)
          }
        ),
      children
    );
};

module Input = {
  [@bs.module "material-ui/Input"] external reactClass : ReasonReact.reactClass = "default";
  let make =
      (
        ~disableUnderline: option(bool)=?,
        ~disabled: option(bool)=?,
        ~error: option(bool)=?,
        ~autoFocus: option(bool)=?,
        ~fullWidth: option(bool)=?,
        ~style: option(ReactDOMRe.style)=?,
        ~value: option(string)=?,
        ~onChange: option((ReactEventRe.Form.t => unit))=?,
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
  [@bs.module "material-ui/Progress"] external reactClass : ReasonReact.reactClass =
    "LinearProgress";
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

module List = {
  [@bs.module "material-ui/List"] external reactClass : ReasonReact.reactClass = "default";
  let make =
      (
        ~dense: option(bool)=?,
        ~disablePadding: option(bool)=?,
        ~className: option(string)=?,
        ~component: option(string)=?,
        ~style: option(ReactDOMRe.style)=?,
        ~subheader: option(ReasonReact.reactElement)=?,
        children
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "dense": unwrap_bool(dense),
            "disablePadding": unwrap_bool(disablePadding),
            "style": from_opt(style),
            "component": from_opt(component),
            "className": from_opt(className),
            "subheader": from_opt(subheader)
          }
        ),
      children
    );
};

module ListItem = {
  [@bs.module "material-ui/List"] external reactClass : ReasonReact.reactClass = "ListItem";
  let make =
      (
        ~button: option(bool)=?,
        ~classes: option(Js.t({..}))=?,
        ~component: option(string)=?,
        ~dense: option(bool)=?,
        ~disableGutters: option(bool)=?,
        ~divider: option(bool)=?,
        ~style: option(ReactDOMRe.style)=?,
        ~className: option(string)=?,
        ~onClick: option((ReactEventRe.Mouse.t => unit))=?,
        children
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        Js.Nullable.(
          {
            "button": unwrap_bool(button),
            "classes": from_opt(classes),
            "component": from_opt(component),
            "dense": unwrap_bool(dense),
            "disableGutters": unwrap_bool(disableGutters),
            "divider": unwrap_bool(divider),
            "style": from_opt(style),
            "className": from_opt(className),
            "onClick": from_opt(onClick)
          }
        ),
      children
    );
};

module Toolbar = {
  [@bs.module "material-ui/Toolbar"] external toolbar : ReasonReact.reactClass = "default";
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

module Typography = {
  [@bs.module "material-ui/Typography"] external typography : ReasonReact.reactClass = "default";
  let make =
      (
        ~align: option(string)=?,
        ~classes: option(Js.t({..}))=?,
        ~className: option(string)=?,
        ~component: option(string)=?,
        ~color: option(string)=?,
        ~gutterBottom=?,
        ~headlineMapping: option(Js.t({..}))=?,
        ~noWrap=?,
        ~paragraph=?,
        ~_type: option(string)=?,
        ~style: option(ReactDOMRe.style)=?,
        children
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=typography,
      ~props=
        Js.Nullable.(
          {
            "align": from_opt(align),
            "classes": from_opt(classes),
            "className": from_opt(className),
            "component": from_opt(component),
            "color": from_opt(color),
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
