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

let make = (~name, _children) => {
  ...component,
  render: (_self) =>
    <MaterialUI.AppBar>
      {ReasonReact.stringToElement("Hello!")}
    </MaterialUI.AppBar>
};
```

## Bindings

- [x] AppBar
- [x] Avatar
- [x] Badge
- [ ] BottomNavigationButton
- [ ] BottomNavigation
- [x] ButtonBase
- [x] Button
- [x] CardActions
- [x] CardContent
- [x] CardHeader
- [x] CardMedia
- [x] Card
- [x] Checkbox
- [x] Chip
- [x] CircularProgress
- [ ] Collapse
- [x] DialogActions
- [x] DialogContentText
- [x] DialogConent
- [x] DialogTitle
- [x] Dialog
- [ ] Divider
- [ ] Drawer
- [ ] Fade
- [ ] FormControlLabel
- [ ] FormControl
- [ ] FormGroup
- [ ] FormHelperText
- [ ] FormLabel
- [ ] GridListTitleBar
- [ ] GridListTitle
- [ ] GridList
- [ ] Grid
- [ ] Grow
- [ ] Hidden
- [ ] IconButton
- [ ] Icon
- [ ] InputAdornment
- [ ] InputLabel
- [ ] Input
- [ ] LinearProgress
- [ ] ListItemAvatar
- [ ] ListItemIcon
- [ ] ListItemSecondaryAction
- [ ] ListItemText
- [ ] ListItem
- [ ] List
- [ ] MenuItem
- [ ] MenuList
- [ ] Menu
- [ ] MobileStepper
- [ ] MuiThemeProvider
- [ ] Paper
- [ ] Popover
- [ ] RadioGroup
- [ ] Radio
- [ ] Select
- [ ] Slide
- [ ] SnackbarContent
- [ ] Snackbar
- [ ] SvgIcon
- [ ] Switch
- [ ] Tab
- [ ] TableBody
- [ ] TableCell
- [ ] TableFooter
- [ ] TableHead
- [ ] TablePagination
- [ ] TableRow
- [ ] TableSortLabel
- [ ] Table
- [ ] Tabs
- [ ] TextField
- [ ] Toolbar
- [ ] Tooltip
- [ ] Typography