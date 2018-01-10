# Reason bindings for Material-UI

[![npm](https://img.shields.io/npm/v/@bernalrs/bs-material-ui-plus.svg)](https://www.npmjs.com/package/bs-material-ui-plus)  

[Reason](https://reasonml.github.io/) bindings for [material-ui](https://github.com/callemall/material-ui).

Warning this is a fork, will probably end up merged into bs-material-ui:
[InsidersByte/bs-material-ui](https://github.com/InsidersByte/bs-material-ui)

## Status

🚧 This is a WIP, not everything is supported yet. 🚧

Feel free to create an issue or PR if you find anything missing.

## Installation

```
yarn add bs-material-ui-plus
yarn add material-ui@next
```

Then add `bs-material-ui-plus` to `bs-dev-dependencies` in your `bsconfig.json`:

```json
{
  ...
  "bs-dev-dependencies": ["bs-material-ui-plus"]
}
```

## Usage

```reason
let component = ReasonReact.statelessComponent("Header");

let make = (_children) => {
  ...component,
  render: (_self) =>
    MaterialUI.(
      <AppBar position="static" color="default">
        <Toolbar>
          <Typography _type="title" color="inherit">
            (ReasonReact.stringToElement("Title"))
          </Typography>
        </Toolbar>
      </AppBar>
    )
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
- [x] Collapse
- [x] DialogActions
- [x] DialogContentText
- [x] DialogContent
- [x] DialogTitle
- [x] Dialog
- [ ] Divider
- [x] Drawer
- [ ] Fade
- [x] FormControlLabel
- [x] FormControl
- [x] FormGroup
- [x] FormHelperText
- [x] FormLabel
- [ ] GridListTitleBar
- [ ] GridListTitle
- [ ] GridList
- [x] Grid
- [ ] Grow
- [ ] Hidden
- [ ] IconButton
- [ ] Icon
- [ ] InputAdornment
- [ ] InputLabel
- [x] Input
- [x] LinearProgress
- [x] ListItemAvatar
- [x] ListItemIcon
- [x] ListItemSecondaryAction
- [x] ListItemText
- [x] ListItem
- [x] ListSubheader
- [x] List
- [x] MenuItem
- [ ] MenuList
- [ ] Menu
- [ ] MobileStepper
- [ ] MuiThemeProvider
- [X] Paper
- [ ] Popover
- [ ] RadioGroup
- [ ] Radio
- [x] Select
- [ ] Slide
- [ ] SnackbarContent
- [ ] Snackbar
- [ ] SvgIcon
- [ ] Switch
- [X] Tab
- [X] TableBody
- [X] TableCell
- [X] TableFooter
- [X] TableHead
- [ ] TablePagination
- [X] TableRow
- [ ] TableSortLabel
- [X] Table
- [X] Tabs
- [X] TextField
- [X] Toolbar
- [X] Tooltip
- [X] Typography
