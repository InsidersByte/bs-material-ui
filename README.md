# Reason bindings for Material-UI

[![npm](https://img.shields.io/npm/v/bs-material-ui.svg)](https://www.npmjs.com/package/bs-material-ui)

[Reason](https://reasonml.github.io/) bindings for [material-ui](https://github.com/callemall/material-ui).

## Status

🚧 This is a WIP, not everything is supported yet. 🚧

Feel free to create an issue or PR if you find anything missing.

## Installation

```
yarn add bs-material-ui
yarn add material-ui@1.0.0-beta.19
```

Then add `bs-material-ui` to `bs-dev-dependencies` in your `bsconfig.json`:

```json
{
  ...
  "bs-dev-dependencies": ["bs-material-ui"]
}
```

## Usage

```reason
let component = ReasonReact.statelessComponent("Header");

let make = (_children) => {
  ...component,
  render: (_self) =>
    <MaterialUI.AppBar position="static" color="default">
      <MaterialUI.Toolbar>
        <MaterialUI.Typography
          _type="title" color=MaterialUI.Typography.Color.Inherit>
          (ReasonReact.stringToElement("Title"))
        </MaterialUI.Typography>
      </MaterialUI.Toolbar>
    </MaterialUI.AppBar>
};
```

> It is not recommended to open this module as it will clash with other modules.  
> If you wish to do so please be aware that the `List` component will clash with the standard library `List` module.

## Bindings

* [x] AppBar
* [x] Avatar
* [x] Badge
* [ ] BottomNavigationButton
* [ ] BottomNavigation
* [x] ButtonBase
* [x] Button
* [x] CardActions
* [x] CardContent
* [x] CardHeader
* [x] CardMedia
* [x] Card
* [x] Checkbox
* [x] Chip
* [x] CircularProgress
* [x] Collapse
* [x] DialogActions
* [x] DialogContentText
* [x] DialogContent
* [x] DialogTitle
* [x] Dialog
* [x] Divider
* [x] Drawer
* [ ] Fade
* [x] FormControlLabel
* [x] FormControl
* [x] FormGroup
* [x] FormHelperText
* [x] FormLabel
* [ ] GridListTitleBar
* [ ] GridListTitle
* [ ] GridList
* [x] Grid
* [ ] Grow
* [ ] Hidden
* [ ] IconButton
* [x] Icon
* [ ] InputAdornment
* [x] InputLabel
* [x] Input
* [x] LinearProgress
* [x] ListItemAvatar
* [x] ListItemIcon
* [x] ListItemSecondaryAction
* [x] ListItemText
* [x] ListItem
* [x] ListSubheader
* [x] List
* [x] MenuItem
* [ ] MenuList
* [ ] Menu
* [ ] MobileStepper
* [ ] MuiThemeProvider
* [x] Paper
* [ ] Popover
* [ ] RadioGroup
* [ ] Radio
* [x] Select
* [ ] Slide
* [ ] SnackbarContent
* [ ] Snackbar
* [ ] SvgIcon
* [ ] Switch
* [x] Tab
* [x] TableBody
* [x] TableCell
* [x] TableFooter
* [x] TableHead
* [ ] TablePagination
* [x] TableRow
* [ ] TableSortLabel
* [x] Table
* [x] Tabs
* [x] TextField
* [x] Toolbar
* [x] Tooltip
* [x] Typography
