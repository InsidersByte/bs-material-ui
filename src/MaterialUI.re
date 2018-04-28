external toJsUnsafe : 'a => 'b = "%identity";

let unwrapValue =
  fun
  | `String((s: string)) => toJsUnsafe(s)
  | `Bool((b: bool)) => toJsUnsafe(b)
  | `Float((f: float)) => toJsUnsafe(f)
  | `Int((i: int)) => toJsUnsafe(i)
  | `Date(d) => toJsUnsafe(d)
  | `Callback(c) => toJsUnsafe(c)
  | `Element(e) => toJsUnsafe(e)
  | `StringArray((sa: array(string))) => toJsUnsafe(sa)
  | `IntArray((ia: array(int))) => toJsUnsafe(ia)
  | `FloatArray((fa: array(float))) => toJsUnsafe(fa)
  | `ObjectGeneric(og) => toJsUnsafe(og)
  | `ArrayGeneric(ag) => toJsUnsafe(ag)
  | `Object(_) => assert false
  | `Enum(_) => assert false
  | `EnumArray(_) => assert false;

module Colors = {
  module Common = {
    [@bs.module "material-ui/colors/common"]
    external commonExt : Js.Dict.t(string) = "default";
    let black: string = Js.Dict.unsafeGet(commonExt, "black");
    let white: string = Js.Dict.unsafeGet(commonExt, "white");
  };
  module Red = {
    [@bs.module "material-ui/colors/red"]
    external redExt : Js.Dict.t(string) = "default";
    let c50: string = Js.Dict.unsafeGet(redExt, "50");
    let c100: string = Js.Dict.unsafeGet(redExt, "100");
    let c200: string = Js.Dict.unsafeGet(redExt, "200");
    let c300: string = Js.Dict.unsafeGet(redExt, "300");
    let c400: string = Js.Dict.unsafeGet(redExt, "400");
    let c500: string = Js.Dict.unsafeGet(redExt, "500");
    let c600: string = Js.Dict.unsafeGet(redExt, "600");
    let c700: string = Js.Dict.unsafeGet(redExt, "700");
    let c800: string = Js.Dict.unsafeGet(redExt, "800");
    let c900: string = Js.Dict.unsafeGet(redExt, "900");
    let a100: string = Js.Dict.unsafeGet(redExt, "A100");
    let a200: string = Js.Dict.unsafeGet(redExt, "A200");
    let a400: string = Js.Dict.unsafeGet(redExt, "A400");
    let a700: string = Js.Dict.unsafeGet(redExt, "A700");
  };
  module Pink = {
    [@bs.module "material-ui/colors/pink"]
    external pinkExt : Js.Dict.t(string) = "default";
    let c50: string = Js.Dict.unsafeGet(pinkExt, "50");
    let c100: string = Js.Dict.unsafeGet(pinkExt, "100");
    let c200: string = Js.Dict.unsafeGet(pinkExt, "200");
    let c300: string = Js.Dict.unsafeGet(pinkExt, "300");
    let c400: string = Js.Dict.unsafeGet(pinkExt, "400");
    let c500: string = Js.Dict.unsafeGet(pinkExt, "500");
    let c600: string = Js.Dict.unsafeGet(pinkExt, "600");
    let c700: string = Js.Dict.unsafeGet(pinkExt, "700");
    let c800: string = Js.Dict.unsafeGet(pinkExt, "800");
    let c900: string = Js.Dict.unsafeGet(pinkExt, "900");
    let a100: string = Js.Dict.unsafeGet(pinkExt, "A100");
    let a200: string = Js.Dict.unsafeGet(pinkExt, "A200");
    let a400: string = Js.Dict.unsafeGet(pinkExt, "A400");
    let a700: string = Js.Dict.unsafeGet(pinkExt, "A700");
  };
  module Purple = {
    [@bs.module "material-ui/colors/purple"]
    external purpleExt : Js.Dict.t(string) = "default";
    let c50: string = Js.Dict.unsafeGet(purpleExt, "50");
    let c100: string = Js.Dict.unsafeGet(purpleExt, "100");
    let c200: string = Js.Dict.unsafeGet(purpleExt, "200");
    let c300: string = Js.Dict.unsafeGet(purpleExt, "300");
    let c400: string = Js.Dict.unsafeGet(purpleExt, "400");
    let c500: string = Js.Dict.unsafeGet(purpleExt, "500");
    let c600: string = Js.Dict.unsafeGet(purpleExt, "600");
    let c700: string = Js.Dict.unsafeGet(purpleExt, "700");
    let c800: string = Js.Dict.unsafeGet(purpleExt, "800");
    let c900: string = Js.Dict.unsafeGet(purpleExt, "900");
    let a100: string = Js.Dict.unsafeGet(purpleExt, "A100");
    let a200: string = Js.Dict.unsafeGet(purpleExt, "A200");
    let a400: string = Js.Dict.unsafeGet(purpleExt, "A400");
    let a700: string = Js.Dict.unsafeGet(purpleExt, "A700");
  };
  module DeepPurple = {
    [@bs.module "material-ui/colors/deepPurple"]
    external deepPurpleExt : Js.Dict.t(string) = "default";
    let c50: string = Js.Dict.unsafeGet(deepPurpleExt, "50");
    let c100: string = Js.Dict.unsafeGet(deepPurpleExt, "100");
    let c200: string = Js.Dict.unsafeGet(deepPurpleExt, "200");
    let c300: string = Js.Dict.unsafeGet(deepPurpleExt, "300");
    let c400: string = Js.Dict.unsafeGet(deepPurpleExt, "400");
    let c500: string = Js.Dict.unsafeGet(deepPurpleExt, "500");
    let c600: string = Js.Dict.unsafeGet(deepPurpleExt, "600");
    let c700: string = Js.Dict.unsafeGet(deepPurpleExt, "700");
    let c800: string = Js.Dict.unsafeGet(deepPurpleExt, "800");
    let c900: string = Js.Dict.unsafeGet(deepPurpleExt, "900");
    let a100: string = Js.Dict.unsafeGet(deepPurpleExt, "A100");
    let a200: string = Js.Dict.unsafeGet(deepPurpleExt, "A200");
    let a400: string = Js.Dict.unsafeGet(deepPurpleExt, "A400");
    let a700: string = Js.Dict.unsafeGet(deepPurpleExt, "A700");
  };
  module Indigo = {
    [@bs.module "material-ui/colors/indigo"]
    external indigoExt : Js.Dict.t(string) = "default";
    let c50: string = Js.Dict.unsafeGet(indigoExt, "50");
    let c100: string = Js.Dict.unsafeGet(indigoExt, "100");
    let c200: string = Js.Dict.unsafeGet(indigoExt, "200");
    let c300: string = Js.Dict.unsafeGet(indigoExt, "300");
    let c400: string = Js.Dict.unsafeGet(indigoExt, "400");
    let c500: string = Js.Dict.unsafeGet(indigoExt, "500");
    let c600: string = Js.Dict.unsafeGet(indigoExt, "600");
    let c700: string = Js.Dict.unsafeGet(indigoExt, "700");
    let c800: string = Js.Dict.unsafeGet(indigoExt, "800");
    let c900: string = Js.Dict.unsafeGet(indigoExt, "900");
    let a100: string = Js.Dict.unsafeGet(indigoExt, "A100");
    let a200: string = Js.Dict.unsafeGet(indigoExt, "A200");
    let a400: string = Js.Dict.unsafeGet(indigoExt, "A400");
    let a700: string = Js.Dict.unsafeGet(indigoExt, "A700");
  };
  module Blue = {
    [@bs.module "material-ui/colors/blue"]
    external blueExt : Js.Dict.t(string) = "default";
    let c50: string = Js.Dict.unsafeGet(blueExt, "50");
    let c100: string = Js.Dict.unsafeGet(blueExt, "100");
    let c200: string = Js.Dict.unsafeGet(blueExt, "200");
    let c300: string = Js.Dict.unsafeGet(blueExt, "300");
    let c400: string = Js.Dict.unsafeGet(blueExt, "400");
    let c500: string = Js.Dict.unsafeGet(blueExt, "500");
    let c600: string = Js.Dict.unsafeGet(blueExt, "600");
    let c700: string = Js.Dict.unsafeGet(blueExt, "700");
    let c800: string = Js.Dict.unsafeGet(blueExt, "800");
    let c900: string = Js.Dict.unsafeGet(blueExt, "900");
    let a100: string = Js.Dict.unsafeGet(blueExt, "A100");
    let a200: string = Js.Dict.unsafeGet(blueExt, "A200");
    let a400: string = Js.Dict.unsafeGet(blueExt, "A400");
    let a700: string = Js.Dict.unsafeGet(blueExt, "A700");
  };
  module LightBlue = {
    [@bs.module "material-ui/colors/lightBlue"]
    external lightBlueExt : Js.Dict.t(string) = "default";
    let c50: string = Js.Dict.unsafeGet(lightBlueExt, "50");
    let c100: string = Js.Dict.unsafeGet(lightBlueExt, "100");
    let c200: string = Js.Dict.unsafeGet(lightBlueExt, "200");
    let c300: string = Js.Dict.unsafeGet(lightBlueExt, "300");
    let c400: string = Js.Dict.unsafeGet(lightBlueExt, "400");
    let c500: string = Js.Dict.unsafeGet(lightBlueExt, "500");
    let c600: string = Js.Dict.unsafeGet(lightBlueExt, "600");
    let c700: string = Js.Dict.unsafeGet(lightBlueExt, "700");
    let c800: string = Js.Dict.unsafeGet(lightBlueExt, "800");
    let c900: string = Js.Dict.unsafeGet(lightBlueExt, "900");
    let a100: string = Js.Dict.unsafeGet(lightBlueExt, "A100");
    let a200: string = Js.Dict.unsafeGet(lightBlueExt, "A200");
    let a400: string = Js.Dict.unsafeGet(lightBlueExt, "A400");
    let a700: string = Js.Dict.unsafeGet(lightBlueExt, "A700");
  };
  module Cyan = {
    [@bs.module "material-ui/colors/cyan"]
    external cyanExt : Js.Dict.t(string) = "default";
    let c50: string = Js.Dict.unsafeGet(cyanExt, "50");
    let c100: string = Js.Dict.unsafeGet(cyanExt, "100");
    let c200: string = Js.Dict.unsafeGet(cyanExt, "200");
    let c300: string = Js.Dict.unsafeGet(cyanExt, "300");
    let c400: string = Js.Dict.unsafeGet(cyanExt, "400");
    let c500: string = Js.Dict.unsafeGet(cyanExt, "500");
    let c600: string = Js.Dict.unsafeGet(cyanExt, "600");
    let c700: string = Js.Dict.unsafeGet(cyanExt, "700");
    let c800: string = Js.Dict.unsafeGet(cyanExt, "800");
    let c900: string = Js.Dict.unsafeGet(cyanExt, "900");
    let a100: string = Js.Dict.unsafeGet(cyanExt, "A100");
    let a200: string = Js.Dict.unsafeGet(cyanExt, "A200");
    let a400: string = Js.Dict.unsafeGet(cyanExt, "A400");
    let a700: string = Js.Dict.unsafeGet(cyanExt, "A700");
  };
  module Teal = {
    [@bs.module "material-ui/colors/teal"]
    external tealExt : Js.Dict.t(string) = "default";
    let c50: string = Js.Dict.unsafeGet(tealExt, "50");
    let c100: string = Js.Dict.unsafeGet(tealExt, "100");
    let c200: string = Js.Dict.unsafeGet(tealExt, "200");
    let c300: string = Js.Dict.unsafeGet(tealExt, "300");
    let c400: string = Js.Dict.unsafeGet(tealExt, "400");
    let c500: string = Js.Dict.unsafeGet(tealExt, "500");
    let c600: string = Js.Dict.unsafeGet(tealExt, "600");
    let c700: string = Js.Dict.unsafeGet(tealExt, "700");
    let c800: string = Js.Dict.unsafeGet(tealExt, "800");
    let c900: string = Js.Dict.unsafeGet(tealExt, "900");
    let a100: string = Js.Dict.unsafeGet(tealExt, "A100");
    let a200: string = Js.Dict.unsafeGet(tealExt, "A200");
    let a400: string = Js.Dict.unsafeGet(tealExt, "A400");
    let a700: string = Js.Dict.unsafeGet(tealExt, "A700");
  };
  module Green = {
    [@bs.module "material-ui/colors/green"]
    external greenExt : Js.Dict.t(string) = "default";
    let c50: string = Js.Dict.unsafeGet(greenExt, "50");
    let c100: string = Js.Dict.unsafeGet(greenExt, "100");
    let c200: string = Js.Dict.unsafeGet(greenExt, "200");
    let c300: string = Js.Dict.unsafeGet(greenExt, "300");
    let c400: string = Js.Dict.unsafeGet(greenExt, "400");
    let c500: string = Js.Dict.unsafeGet(greenExt, "500");
    let c600: string = Js.Dict.unsafeGet(greenExt, "600");
    let c700: string = Js.Dict.unsafeGet(greenExt, "700");
    let c800: string = Js.Dict.unsafeGet(greenExt, "800");
    let c900: string = Js.Dict.unsafeGet(greenExt, "900");
    let a100: string = Js.Dict.unsafeGet(greenExt, "A100");
    let a200: string = Js.Dict.unsafeGet(greenExt, "A200");
    let a400: string = Js.Dict.unsafeGet(greenExt, "A400");
    let a700: string = Js.Dict.unsafeGet(greenExt, "A700");
  };
  module LightGreen = {
    [@bs.module "material-ui/colors/lightGreen"]
    external lightGreenExt : Js.Dict.t(string) = "default";
    let c50: string = Js.Dict.unsafeGet(lightGreenExt, "50");
    let c100: string = Js.Dict.unsafeGet(lightGreenExt, "100");
    let c200: string = Js.Dict.unsafeGet(lightGreenExt, "200");
    let c300: string = Js.Dict.unsafeGet(lightGreenExt, "300");
    let c400: string = Js.Dict.unsafeGet(lightGreenExt, "400");
    let c500: string = Js.Dict.unsafeGet(lightGreenExt, "500");
    let c600: string = Js.Dict.unsafeGet(lightGreenExt, "600");
    let c700: string = Js.Dict.unsafeGet(lightGreenExt, "700");
    let c800: string = Js.Dict.unsafeGet(lightGreenExt, "800");
    let c900: string = Js.Dict.unsafeGet(lightGreenExt, "900");
    let a100: string = Js.Dict.unsafeGet(lightGreenExt, "A100");
    let a200: string = Js.Dict.unsafeGet(lightGreenExt, "A200");
    let a400: string = Js.Dict.unsafeGet(lightGreenExt, "A400");
    let a700: string = Js.Dict.unsafeGet(lightGreenExt, "A700");
  };
  module Lime = {
    [@bs.module "material-ui/colors/lime"]
    external limeExt : Js.Dict.t(string) = "default";
    let c50: string = Js.Dict.unsafeGet(limeExt, "50");
    let c100: string = Js.Dict.unsafeGet(limeExt, "100");
    let c200: string = Js.Dict.unsafeGet(limeExt, "200");
    let c300: string = Js.Dict.unsafeGet(limeExt, "300");
    let c400: string = Js.Dict.unsafeGet(limeExt, "400");
    let c500: string = Js.Dict.unsafeGet(limeExt, "500");
    let c600: string = Js.Dict.unsafeGet(limeExt, "600");
    let c700: string = Js.Dict.unsafeGet(limeExt, "700");
    let c800: string = Js.Dict.unsafeGet(limeExt, "800");
    let c900: string = Js.Dict.unsafeGet(limeExt, "900");
    let a100: string = Js.Dict.unsafeGet(limeExt, "A100");
    let a200: string = Js.Dict.unsafeGet(limeExt, "A200");
    let a400: string = Js.Dict.unsafeGet(limeExt, "A400");
    let a700: string = Js.Dict.unsafeGet(limeExt, "A700");
  };
  module Yellow = {
    [@bs.module "material-ui/colors/yellow"]
    external yellowExt : Js.Dict.t(string) = "default";
    let c50: string = Js.Dict.unsafeGet(yellowExt, "50");
    let c100: string = Js.Dict.unsafeGet(yellowExt, "100");
    let c200: string = Js.Dict.unsafeGet(yellowExt, "200");
    let c300: string = Js.Dict.unsafeGet(yellowExt, "300");
    let c400: string = Js.Dict.unsafeGet(yellowExt, "400");
    let c500: string = Js.Dict.unsafeGet(yellowExt, "500");
    let c600: string = Js.Dict.unsafeGet(yellowExt, "600");
    let c700: string = Js.Dict.unsafeGet(yellowExt, "700");
    let c800: string = Js.Dict.unsafeGet(yellowExt, "800");
    let c900: string = Js.Dict.unsafeGet(yellowExt, "900");
    let a100: string = Js.Dict.unsafeGet(yellowExt, "A100");
    let a200: string = Js.Dict.unsafeGet(yellowExt, "A200");
    let a400: string = Js.Dict.unsafeGet(yellowExt, "A400");
    let a700: string = Js.Dict.unsafeGet(yellowExt, "A700");
  };
  module Amber = {
    [@bs.module "material-ui/colors/amber"]
    external amberExt : Js.Dict.t(string) = "default";
    let c50: string = Js.Dict.unsafeGet(amberExt, "50");
    let c100: string = Js.Dict.unsafeGet(amberExt, "100");
    let c200: string = Js.Dict.unsafeGet(amberExt, "200");
    let c300: string = Js.Dict.unsafeGet(amberExt, "300");
    let c400: string = Js.Dict.unsafeGet(amberExt, "400");
    let c500: string = Js.Dict.unsafeGet(amberExt, "500");
    let c600: string = Js.Dict.unsafeGet(amberExt, "600");
    let c700: string = Js.Dict.unsafeGet(amberExt, "700");
    let c800: string = Js.Dict.unsafeGet(amberExt, "800");
    let c900: string = Js.Dict.unsafeGet(amberExt, "900");
    let a100: string = Js.Dict.unsafeGet(amberExt, "A100");
    let a200: string = Js.Dict.unsafeGet(amberExt, "A200");
    let a400: string = Js.Dict.unsafeGet(amberExt, "A400");
    let a700: string = Js.Dict.unsafeGet(amberExt, "A700");
  };
  module Orange = {
    [@bs.module "material-ui/colors/orange"]
    external orangeExt : Js.Dict.t(string) = "default";
    let c50: string = Js.Dict.unsafeGet(orangeExt, "50");
    let c100: string = Js.Dict.unsafeGet(orangeExt, "100");
    let c200: string = Js.Dict.unsafeGet(orangeExt, "200");
    let c300: string = Js.Dict.unsafeGet(orangeExt, "300");
    let c400: string = Js.Dict.unsafeGet(orangeExt, "400");
    let c500: string = Js.Dict.unsafeGet(orangeExt, "500");
    let c600: string = Js.Dict.unsafeGet(orangeExt, "600");
    let c700: string = Js.Dict.unsafeGet(orangeExt, "700");
    let c800: string = Js.Dict.unsafeGet(orangeExt, "800");
    let c900: string = Js.Dict.unsafeGet(orangeExt, "900");
    let a100: string = Js.Dict.unsafeGet(orangeExt, "A100");
    let a200: string = Js.Dict.unsafeGet(orangeExt, "A200");
    let a400: string = Js.Dict.unsafeGet(orangeExt, "A400");
    let a700: string = Js.Dict.unsafeGet(orangeExt, "A700");
  };
  module DeepOrange = {
    [@bs.module "material-ui/colors/deepOrange"]
    external deepOrangeExt : Js.Dict.t(string) = "default";
    let c50: string = Js.Dict.unsafeGet(deepOrangeExt, "50");
    let c100: string = Js.Dict.unsafeGet(deepOrangeExt, "100");
    let c200: string = Js.Dict.unsafeGet(deepOrangeExt, "200");
    let c300: string = Js.Dict.unsafeGet(deepOrangeExt, "300");
    let c400: string = Js.Dict.unsafeGet(deepOrangeExt, "400");
    let c500: string = Js.Dict.unsafeGet(deepOrangeExt, "500");
    let c600: string = Js.Dict.unsafeGet(deepOrangeExt, "600");
    let c700: string = Js.Dict.unsafeGet(deepOrangeExt, "700");
    let c800: string = Js.Dict.unsafeGet(deepOrangeExt, "800");
    let c900: string = Js.Dict.unsafeGet(deepOrangeExt, "900");
    let a100: string = Js.Dict.unsafeGet(deepOrangeExt, "A100");
    let a200: string = Js.Dict.unsafeGet(deepOrangeExt, "A200");
    let a400: string = Js.Dict.unsafeGet(deepOrangeExt, "A400");
    let a700: string = Js.Dict.unsafeGet(deepOrangeExt, "A700");
  };
  module Brown = {
    [@bs.module "material-ui/colors/brown"]
    external brownExt : Js.Dict.t(string) = "default";
    let c50: string = Js.Dict.unsafeGet(brownExt, "50");
    let c100: string = Js.Dict.unsafeGet(brownExt, "100");
    let c200: string = Js.Dict.unsafeGet(brownExt, "200");
    let c300: string = Js.Dict.unsafeGet(brownExt, "300");
    let c400: string = Js.Dict.unsafeGet(brownExt, "400");
    let c500: string = Js.Dict.unsafeGet(brownExt, "500");
    let c600: string = Js.Dict.unsafeGet(brownExt, "600");
    let c700: string = Js.Dict.unsafeGet(brownExt, "700");
    let c800: string = Js.Dict.unsafeGet(brownExt, "800");
    let c900: string = Js.Dict.unsafeGet(brownExt, "900");
    let a100: string = Js.Dict.unsafeGet(brownExt, "A100");
    let a200: string = Js.Dict.unsafeGet(brownExt, "A200");
    let a400: string = Js.Dict.unsafeGet(brownExt, "A400");
    let a700: string = Js.Dict.unsafeGet(brownExt, "A700");
  };
  module Grey = {
    [@bs.module "material-ui/colors/grey"]
    external greyExt : Js.Dict.t(string) = "default";
    let c50: string = Js.Dict.unsafeGet(greyExt, "50");
    let c100: string = Js.Dict.unsafeGet(greyExt, "100");
    let c200: string = Js.Dict.unsafeGet(greyExt, "200");
    let c300: string = Js.Dict.unsafeGet(greyExt, "300");
    let c400: string = Js.Dict.unsafeGet(greyExt, "400");
    let c500: string = Js.Dict.unsafeGet(greyExt, "500");
    let c600: string = Js.Dict.unsafeGet(greyExt, "600");
    let c700: string = Js.Dict.unsafeGet(greyExt, "700");
    let c800: string = Js.Dict.unsafeGet(greyExt, "800");
    let c900: string = Js.Dict.unsafeGet(greyExt, "900");
    let a100: string = Js.Dict.unsafeGet(greyExt, "A100");
    let a200: string = Js.Dict.unsafeGet(greyExt, "A200");
    let a400: string = Js.Dict.unsafeGet(greyExt, "A400");
    let a700: string = Js.Dict.unsafeGet(greyExt, "A700");
  };
  module BlueGrey = {
    [@bs.module "material-ui/colors/blueGrey"]
    external blueGreyExt : Js.Dict.t(string) = "default";
    let c50: string = Js.Dict.unsafeGet(blueGreyExt, "50");
    let c100: string = Js.Dict.unsafeGet(blueGreyExt, "100");
    let c200: string = Js.Dict.unsafeGet(blueGreyExt, "200");
    let c300: string = Js.Dict.unsafeGet(blueGreyExt, "300");
    let c400: string = Js.Dict.unsafeGet(blueGreyExt, "400");
    let c500: string = Js.Dict.unsafeGet(blueGreyExt, "500");
    let c600: string = Js.Dict.unsafeGet(blueGreyExt, "600");
    let c700: string = Js.Dict.unsafeGet(blueGreyExt, "700");
    let c800: string = Js.Dict.unsafeGet(blueGreyExt, "800");
    let c900: string = Js.Dict.unsafeGet(blueGreyExt, "900");
    let a100: string = Js.Dict.unsafeGet(blueGreyExt, "A100");
    let a200: string = Js.Dict.unsafeGet(blueGreyExt, "A200");
    let a400: string = Js.Dict.unsafeGet(blueGreyExt, "A400");
    let a700: string = Js.Dict.unsafeGet(blueGreyExt, "A700");
  };
};

module AppBar = {
  [@bs.deriving jsConverter]
  type color = [
    | [@bs.as "inherit"] `Inherit
    | [@bs.as "primary"] `Primary
    | [@bs.as "secondary"] `Secondary
    | [@bs.as "default"] `Default
  ];
  [@bs.deriving jsConverter]
  type position = [
    | [@bs.as "fixed"] `Fixed
    | [@bs.as "absolute"] `Absolute
    | [@bs.as "sticky"] `Sticky
    | [@bs.as "static"] `Static
  ];
  module Classes = {
    type classesType =
      | Root(string)
      | PositionFixed(string)
      | PositionAbsolute(string)
      | PositionSticky(string)
      | PositionStatic(string)
      | ColorDefault(string)
      | ColorPrimary(string)
      | ColorSecondary(string);
    type t = list(classesType);
    let to_string =
      fun
      | Root(_) => "root"
      | PositionFixed(_) => "positionFixed"
      | PositionAbsolute(_) => "positionAbsolute"
      | PositionSticky(_) => "positionSticky"
      | PositionStatic(_) => "positionStatic"
      | ColorDefault(_) => "colorDefault"
      | ColorPrimary(_) => "colorPrimary"
      | ColorSecondary(_) => "colorSecondary";
    let to_obj = listOfClasses =>
      listOfClasses
      |> StdLabels.List.fold_left(
           ~f=
             (obj, classType) => {
               switch (classType) {
               | Root(className)
               | PositionFixed(className)
               | PositionAbsolute(className)
               | PositionSticky(className)
               | PositionStatic(className)
               | ColorDefault(className)
               | ColorPrimary(className)
               | ColorSecondary(className) =>
                 Js.Dict.set(obj, to_string(classType), className)
               };
               obj;
             },
           ~init=Js.Dict.empty(),
         );
  };
  [@bs.module "material-ui/AppBar/AppBar"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~className: string=?,
      ~color: string=?,
      ~position: string=?,
      ~component: 'union_h=?,
      ~elevation: 'number_j=?,
      ~square: bool=?,
      ~classes: Js.Dict.t(string)=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~className: option(string)=?,
        ~color: option(color)=?,
        ~position: option(position)=?,
        ~component:
           option([ | `String(string) | `Element(ReasonReact.reactElement)])=?,
        ~elevation: option([ | `Int(int) | `Float(float)])=?,
        ~square: option(bool)=?,
        ~classes: option(Classes.t)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~className?,
          ~color=?Js.Option.map((. v) => colorToJs(v), color),
          ~position=?Js.Option.map((. v) => positionToJs(v), position),
          ~component=?Js.Option.map((. v) => unwrapValue(v), component),
          ~elevation=?Js.Option.map((. v) => unwrapValue(v), elevation),
          ~square?,
          ~classes=?Js.Option.map((. v) => Classes.to_obj(v), classes),
          ~style?,
          (),
        ),
      children,
    );
};

module Avatar = {
  module Classes = {
    type classesType =
      | Root(string)
      | ColorDefault(string)
      | Img(string);
    type t = list(classesType);
    let to_string =
      fun
      | Root(_) => "root"
      | ColorDefault(_) => "colorDefault"
      | Img(_) => "img";
    let to_obj = listOfClasses =>
      listOfClasses
      |> StdLabels.List.fold_left(
           ~f=
             (obj, classType) => {
               switch (classType) {
               | Root(className)
               | ColorDefault(className)
               | Img(className) =>
                 Js.Dict.set(obj, to_string(classType), className)
               };
               obj;
             },
           ~init=Js.Dict.empty(),
         );
  };
  [@bs.module "material-ui/Avatar/Avatar"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~alt: string=?,
      ~childrenClassName: string=?,
      ~className: string=?,
      ~component: 'union_l=?,
      ~imgProps: Js.t({..})=?,
      ~sizes: string=?,
      ~src: string=?,
      ~srcSet: string=?,
      ~classes: Js.Dict.t(string)=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~alt: option(string)=?,
        ~childrenClassName: option(string)=?,
        ~className: option(string)=?,
        ~component:
           option([ | `String(string) | `Element(ReasonReact.reactElement)])=?,
        ~imgProps: option(Js.t({..}))=?,
        ~sizes: option(string)=?,
        ~src: option(string)=?,
        ~srcSet: option(string)=?,
        ~classes: option(Classes.t)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~alt?,
          ~childrenClassName?,
          ~className?,
          ~component=?Js.Option.map((. v) => unwrapValue(v), component),
          ~imgProps?,
          ~sizes?,
          ~src?,
          ~srcSet?,
          ~classes=?Js.Option.map((. v) => Classes.to_obj(v), classes),
          ~style?,
          (),
        ),
      children,
    );
};

module Backdrop = {
  [@bs.deriving jsConverter]
  type transitionDurationShape = {
    enter: int,
    exit: int,
  };
  module Classes = {
    type classesType =
      | Root(string)
      | Invisible(string);
    type t = list(classesType);
    let to_string =
      fun
      | Root(_) => "root"
      | Invisible(_) => "invisible";
    let to_obj = listOfClasses =>
      listOfClasses
      |> StdLabels.List.fold_left(
           ~f=
             (obj, classType) => {
               switch (classType) {
               | Root(className)
               | Invisible(className) =>
                 Js.Dict.set(obj, to_string(classType), className)
               };
               obj;
             },
           ~init=Js.Dict.empty(),
         );
  };
  [@bs.module "material-ui/Modal/Backdrop"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~className: string=?,
      ~invisible: bool=?,
      ~_open: bool,
      ~transitionDuration: 'union_t=?,
      ~classes: Js.Dict.t(string)=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~className: option(string)=?,
        ~invisible: option(bool)=?,
        ~_open: bool,
        ~transitionDuration:
           option(
             [
               | `Int(int)
               | `Float(float)
               | `Object(transitionDurationShape)
             ],
           )=?,
        ~classes: option(Classes.t)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~className?,
          ~invisible?,
          ~_open,
          ~transitionDuration=?
            Js.Option.map(
              (. v) =>
                switch (v) {
                | `Object(v) =>
                  unwrapValue(`Element(transitionDurationShapeToJs(v)))
                | v => unwrapValue(v)
                },
              transitionDuration,
            ),
          ~classes=?Js.Option.map((. v) => Classes.to_obj(v), classes),
          ~style?,
          (),
        ),
      children,
    );
};

module Badge = {
  [@bs.deriving jsConverter]
  type color = [
    | [@bs.as "default"] `Default
    | [@bs.as "primary"] `Primary
    | [@bs.as "secondary"] `Secondary
    | [@bs.as "error"] `Error
  ];
  module Classes = {
    type classesType =
      | Root(string)
      | Badge(string)
      | ColorPrimary(string)
      | ColorSecondary(string)
      | ColorError(string);
    type t = list(classesType);
    let to_string =
      fun
      | Root(_) => "root"
      | Badge(_) => "badge"
      | ColorPrimary(_) => "colorPrimary"
      | ColorSecondary(_) => "colorSecondary"
      | ColorError(_) => "colorError";
    let to_obj = listOfClasses =>
      listOfClasses
      |> StdLabels.List.fold_left(
           ~f=
             (obj, classType) => {
               switch (classType) {
               | Root(className)
               | Badge(className)
               | ColorPrimary(className)
               | ColorSecondary(className)
               | ColorError(className) =>
                 Js.Dict.set(obj, to_string(classType), className)
               };
               obj;
             },
           ~init=Js.Dict.empty(),
         );
  };
  [@bs.module "material-ui/Badge/Badge"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~badgeContent: ReasonReact.reactElement,
      ~className: string=?,
      ~color: string=?,
      ~component: 'union_g=?,
      ~classes: Js.Dict.t(string)=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~badgeContent: ReasonReact.reactElement,
        ~className: option(string)=?,
        ~color: option(color)=?,
        ~component:
           option([ | `String(string) | `Element(ReasonReact.reactElement)])=?,
        ~classes: option(Classes.t)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~badgeContent,
          ~className?,
          ~color=?Js.Option.map((. v) => colorToJs(v), color),
          ~component=?Js.Option.map((. v) => unwrapValue(v), component),
          ~classes=?Js.Option.map((. v) => Classes.to_obj(v), classes),
          ~style?,
          (),
        ),
      children,
    );
};

module BottomNavigationAction = {
  module Classes = {
    type classesType =
      | Root(string)
      | Selected(string)
      | SelectedIconOnly(string)
      | Wrapper(string)
      | Label(string)
      | LabelSelected(string)
      | LabelHidden(string);
    type t = list(classesType);
    let to_string =
      fun
      | Root(_) => "root"
      | Selected(_) => "selected"
      | SelectedIconOnly(_) => "selectedIconOnly"
      | Wrapper(_) => "wrapper"
      | Label(_) => "label"
      | LabelSelected(_) => "labelSelected"
      | LabelHidden(_) => "labelHidden";
    let to_obj = listOfClasses =>
      listOfClasses
      |> StdLabels.List.fold_left(
           ~f=
             (obj, classType) => {
               switch (classType) {
               | Root(className)
               | Selected(className)
               | SelectedIconOnly(className)
               | Wrapper(className)
               | Label(className)
               | LabelSelected(className)
               | LabelHidden(className) =>
                 Js.Dict.set(obj, to_string(classType), className)
               };
               obj;
             },
           ~init=Js.Dict.empty(),
         );
  };
  [@bs.module "material-ui/BottomNavigation/BottomNavigationAction"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~className: string=?,
      ~icon: ReasonReact.reactElement=?,
      ~label: ReasonReact.reactElement=?,
      ~onChange: ReactEventRe.Form.t => unit=?,
      ~onClick: ReactEventRe.Mouse.t => unit=?,
      ~selected: bool=?,
      ~showLabel: bool=?,
      ~value: 'any_8=?,
      ~buttonRef: ReasonReact.reactElement=?,
      ~centerRipple: bool=?,
      ~component: 'union_0=?,
      ~disabled: bool=?,
      ~disableRipple: bool=?,
      ~focusRipple: bool=?,
      ~onBlur: ReactEventRe.Focus.t => unit=?,
      ~onFocus: ReactEventRe.Focus.t => unit=?,
      ~onKeyboardFocus: ReactEventRe.Focus.t => unit=?,
      ~onKeyDown: ReactEventRe.Keyboard.t => unit=?,
      ~onKeyUp: ReactEventRe.Keyboard.t => unit=?,
      ~onMouseDown: ReactEventRe.Mouse.t => unit=?,
      ~onMouseLeave: ReactEventRe.Mouse.t => unit=?,
      ~onMouseUp: ReactEventRe.Mouse.t => unit=?,
      ~onTouchEnd: ReactEventRe.Touch.t => unit=?,
      ~onTouchMove: ReactEventRe.Touch.t => unit=?,
      ~onTouchStart: ReactEventRe.Touch.t => unit=?,
      ~role: string=?,
      ~tabIndex: 'union_o=?,
      ~_TouchRippleProps: Js.t({..})=?,
      ~_type: string=?,
      ~classes: Js.Dict.t(string)=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~className: option(string)=?,
        ~icon: option(ReasonReact.reactElement)=?,
        ~label: option(ReasonReact.reactElement)=?,
        ~onChange: option(ReactEventRe.Form.t => unit)=?,
        ~onClick: option(ReactEventRe.Mouse.t => unit)=?,
        ~selected: option(bool)=?,
        ~showLabel: option(bool)=?,
        ~value: option('any_8)=?,
        ~buttonRef: option(ReasonReact.reactElement)=?,
        ~centerRipple: option(bool)=?,
        ~component:
           option([ | `String(string) | `Element(ReasonReact.reactElement)])=?,
        ~disabled: option(bool)=?,
        ~disableRipple: option(bool)=?,
        ~focusRipple: option(bool)=?,
        ~onBlur: option(ReactEventRe.Focus.t => unit)=?,
        ~onFocus: option(ReactEventRe.Focus.t => unit)=?,
        ~onKeyboardFocus: option(ReactEventRe.Focus.t => unit)=?,
        ~onKeyDown: option(ReactEventRe.Keyboard.t => unit)=?,
        ~onKeyUp: option(ReactEventRe.Keyboard.t => unit)=?,
        ~onMouseDown: option(ReactEventRe.Mouse.t => unit)=?,
        ~onMouseLeave: option(ReactEventRe.Mouse.t => unit)=?,
        ~onMouseUp: option(ReactEventRe.Mouse.t => unit)=?,
        ~onTouchEnd: option(ReactEventRe.Touch.t => unit)=?,
        ~onTouchMove: option(ReactEventRe.Touch.t => unit)=?,
        ~onTouchStart: option(ReactEventRe.Touch.t => unit)=?,
        ~role: option(string)=?,
        ~tabIndex: option([ | `Int(int) | `Float(float) | `String(string)])=?,
        ~_TouchRippleProps: option(Js.t({..}))=?,
        ~_type: option(string)=?,
        ~classes: option(Classes.t)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~className?,
          ~icon?,
          ~label?,
          ~onChange?,
          ~onClick?,
          ~selected?,
          ~showLabel?,
          ~value?,
          ~buttonRef?,
          ~centerRipple?,
          ~component=?Js.Option.map((. v) => unwrapValue(v), component),
          ~disabled?,
          ~disableRipple?,
          ~focusRipple?,
          ~onBlur?,
          ~onFocus?,
          ~onKeyboardFocus?,
          ~onKeyDown?,
          ~onKeyUp?,
          ~onMouseDown?,
          ~onMouseLeave?,
          ~onMouseUp?,
          ~onTouchEnd?,
          ~onTouchMove?,
          ~onTouchStart?,
          ~role?,
          ~tabIndex=?Js.Option.map((. v) => unwrapValue(v), tabIndex),
          ~_TouchRippleProps?,
          ~_type?,
          ~classes=?Js.Option.map((. v) => Classes.to_obj(v), classes),
          ~style?,
          (),
        ),
      children,
    );
};

module BottomNavigation = {
  module Classes = {
    type classesType =
      | Root(string);
    type t = list(classesType);
    let to_string =
      fun
      | Root(_) => "root";
    let to_obj = listOfClasses =>
      listOfClasses
      |> StdLabels.List.fold_left(
           ~f=
             (obj, classType) => {
               switch (classType) {
               | Root(className) =>
                 Js.Dict.set(obj, to_string(classType), className)
               };
               obj;
             },
           ~init=Js.Dict.empty(),
         );
  };
  [@bs.module "material-ui/BottomNavigation/BottomNavigation"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~className: string=?,
      ~onChange: ReactEventRe.Form.t => unit=?,
      ~showLabels: bool=?,
      ~value: 'any_u=?,
      ~classes: Js.Dict.t(string)=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~className: option(string)=?,
        ~onChange: option(ReactEventRe.Form.t => unit)=?,
        ~showLabels: option(bool)=?,
        ~value: option('any_u)=?,
        ~classes: option(Classes.t)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~className?,
          ~onChange?,
          ~showLabels?,
          ~value?,
          ~classes=?Js.Option.map((. v) => Classes.to_obj(v), classes),
          ~style?,
          (),
        ),
      children,
    );
};

module ButtonBase = {
  module Classes = {
    type classesType =
      | Root(string)
      | Disabled(string)
      | KeyboardFocused(string);
    type t = list(classesType);
    let to_string =
      fun
      | Root(_) => "root"
      | Disabled(_) => "disabled"
      | KeyboardFocused(_) => "keyboardFocused";
    let to_obj = listOfClasses =>
      listOfClasses
      |> StdLabels.List.fold_left(
           ~f=
             (obj, classType) => {
               switch (classType) {
               | Root(className)
               | Disabled(className)
               | KeyboardFocused(className) =>
                 Js.Dict.set(obj, to_string(classType), className)
               };
               obj;
             },
           ~init=Js.Dict.empty(),
         );
  };
  [@bs.module "material-ui/ButtonBase/ButtonBase"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~buttonRef: ReasonReact.reactElement=?,
      ~centerRipple: bool=?,
      ~className: string=?,
      ~component: 'union_0=?,
      ~disabled: bool=?,
      ~disableRipple: bool=?,
      ~focusRipple: bool=?,
      ~onBlur: ReactEventRe.Focus.t => unit=?,
      ~onClick: ReactEventRe.Mouse.t => unit=?,
      ~onFocus: ReactEventRe.Focus.t => unit=?,
      ~onKeyboardFocus: ReactEventRe.Focus.t => unit=?,
      ~onKeyDown: ReactEventRe.Keyboard.t => unit=?,
      ~onKeyUp: ReactEventRe.Keyboard.t => unit=?,
      ~onMouseDown: ReactEventRe.Mouse.t => unit=?,
      ~onMouseLeave: ReactEventRe.Mouse.t => unit=?,
      ~onMouseUp: ReactEventRe.Mouse.t => unit=?,
      ~onTouchEnd: ReactEventRe.Touch.t => unit=?,
      ~onTouchMove: ReactEventRe.Touch.t => unit=?,
      ~onTouchStart: ReactEventRe.Touch.t => unit=?,
      ~role: string=?,
      ~tabIndex: 'union_o=?,
      ~_TouchRippleProps: Js.t({..})=?,
      ~_type: string=?,
      ~classes: Js.Dict.t(string)=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~buttonRef: option(ReasonReact.reactElement)=?,
        ~centerRipple: option(bool)=?,
        ~className: option(string)=?,
        ~component:
           option([ | `String(string) | `Element(ReasonReact.reactElement)])=?,
        ~disabled: option(bool)=?,
        ~disableRipple: option(bool)=?,
        ~focusRipple: option(bool)=?,
        ~onBlur: option(ReactEventRe.Focus.t => unit)=?,
        ~onClick: option(ReactEventRe.Mouse.t => unit)=?,
        ~onFocus: option(ReactEventRe.Focus.t => unit)=?,
        ~onKeyboardFocus: option(ReactEventRe.Focus.t => unit)=?,
        ~onKeyDown: option(ReactEventRe.Keyboard.t => unit)=?,
        ~onKeyUp: option(ReactEventRe.Keyboard.t => unit)=?,
        ~onMouseDown: option(ReactEventRe.Mouse.t => unit)=?,
        ~onMouseLeave: option(ReactEventRe.Mouse.t => unit)=?,
        ~onMouseUp: option(ReactEventRe.Mouse.t => unit)=?,
        ~onTouchEnd: option(ReactEventRe.Touch.t => unit)=?,
        ~onTouchMove: option(ReactEventRe.Touch.t => unit)=?,
        ~onTouchStart: option(ReactEventRe.Touch.t => unit)=?,
        ~role: option(string)=?,
        ~tabIndex: option([ | `Int(int) | `Float(float) | `String(string)])=?,
        ~_TouchRippleProps: option(Js.t({..}))=?,
        ~_type: option(string)=?,
        ~classes: option(Classes.t)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~buttonRef?,
          ~centerRipple?,
          ~className?,
          ~component=?Js.Option.map((. v) => unwrapValue(v), component),
          ~disabled?,
          ~disableRipple?,
          ~focusRipple?,
          ~onBlur?,
          ~onClick?,
          ~onFocus?,
          ~onKeyboardFocus?,
          ~onKeyDown?,
          ~onKeyUp?,
          ~onMouseDown?,
          ~onMouseLeave?,
          ~onMouseUp?,
          ~onTouchEnd?,
          ~onTouchMove?,
          ~onTouchStart?,
          ~role?,
          ~tabIndex=?Js.Option.map((. v) => unwrapValue(v), tabIndex),
          ~_TouchRippleProps?,
          ~_type?,
          ~classes=?Js.Option.map((. v) => Classes.to_obj(v), classes),
          ~style?,
          (),
        ),
      children,
    );
};

module Button = {
  [@bs.deriving jsConverter]
  type color = [
    | [@bs.as "default"] `Default
    | [@bs.as "inherit"] `Inherit
    | [@bs.as "primary"] `Primary
    | [@bs.as "secondary"] `Secondary
  ];
  [@bs.deriving jsConverter]
  type size = [
    | [@bs.as "small"] `Small
    | [@bs.as "medium"] `Medium
    | [@bs.as "large"] `Large
  ];
  [@bs.deriving jsConverter]
  type variant = [
    | [@bs.as "flat"] `Flat
    | [@bs.as "raised"] `Raised
    | [@bs.as "fab"] `Fab
  ];
  module Classes = {
    type classesType =
      | Root(string)
      | Label(string)
      | FlatPrimary(string)
      | FlatSecondary(string)
      | ColorInherit(string)
      | Raised(string)
      | KeyboardFocused(string)
      | RaisedPrimary(string)
      | RaisedSecondary(string)
      | Disabled(string)
      | Fab(string)
      | Mini(string)
      | SizeSmall(string)
      | SizeLarge(string)
      | FullWidth(string);
    type t = list(classesType);
    let to_string =
      fun
      | Root(_) => "root"
      | Label(_) => "label"
      | FlatPrimary(_) => "flatPrimary"
      | FlatSecondary(_) => "flatSecondary"
      | ColorInherit(_) => "colorInherit"
      | Raised(_) => "raised"
      | KeyboardFocused(_) => "keyboardFocused"
      | RaisedPrimary(_) => "raisedPrimary"
      | RaisedSecondary(_) => "raisedSecondary"
      | Disabled(_) => "disabled"
      | Fab(_) => "fab"
      | Mini(_) => "mini"
      | SizeSmall(_) => "sizeSmall"
      | SizeLarge(_) => "sizeLarge"
      | FullWidth(_) => "fullWidth";
    let to_obj = listOfClasses =>
      listOfClasses
      |> StdLabels.List.fold_left(
           ~f=
             (obj, classType) => {
               switch (classType) {
               | Root(className)
               | Label(className)
               | FlatPrimary(className)
               | FlatSecondary(className)
               | ColorInherit(className)
               | Raised(className)
               | KeyboardFocused(className)
               | RaisedPrimary(className)
               | RaisedSecondary(className)
               | Disabled(className)
               | Fab(className)
               | Mini(className)
               | SizeSmall(className)
               | SizeLarge(className)
               | FullWidth(className) =>
                 Js.Dict.set(obj, to_string(classType), className)
               };
               obj;
             },
           ~init=Js.Dict.empty(),
         );
  };
  [@bs.module "material-ui/Button/Button"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~className: string=?,
      ~color: string=?,
      ~component: 'union_d=?,
      ~disabled: bool=?,
      ~disableFocusRipple: bool=?,
      ~disableRipple: bool=?,
      ~fullWidth: bool=?,
      ~href: string=?,
      ~mini: bool=?,
      ~size: string=?,
      ~_type: string=?,
      ~variant: string=?,
      ~buttonRef: ReasonReact.reactElement=?,
      ~centerRipple: bool=?,
      ~focusRipple: bool=?,
      ~onBlur: ReactEventRe.Focus.t => unit=?,
      ~onClick: ReactEventRe.Mouse.t => unit=?,
      ~onFocus: ReactEventRe.Focus.t => unit=?,
      ~onKeyboardFocus: ReactEventRe.Focus.t => unit=?,
      ~onKeyDown: ReactEventRe.Keyboard.t => unit=?,
      ~onKeyUp: ReactEventRe.Keyboard.t => unit=?,
      ~onMouseDown: ReactEventRe.Mouse.t => unit=?,
      ~onMouseLeave: ReactEventRe.Mouse.t => unit=?,
      ~onMouseUp: ReactEventRe.Mouse.t => unit=?,
      ~onTouchEnd: ReactEventRe.Touch.t => unit=?,
      ~onTouchMove: ReactEventRe.Touch.t => unit=?,
      ~onTouchStart: ReactEventRe.Touch.t => unit=?,
      ~role: string=?,
      ~tabIndex: 'union_o=?,
      ~_TouchRippleProps: Js.t({..})=?,
      ~classes: Js.Dict.t(string)=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~className: option(string)=?,
        ~color: option(color)=?,
        ~component:
           option([ | `String(string) | `Element(ReasonReact.reactElement)])=?,
        ~disabled: option(bool)=?,
        ~disableFocusRipple: option(bool)=?,
        ~disableRipple: option(bool)=?,
        ~fullWidth: option(bool)=?,
        ~href: option(string)=?,
        ~mini: option(bool)=?,
        ~size: option(size)=?,
        ~_type: option(string)=?,
        ~variant: option(variant)=?,
        ~buttonRef: option(ReasonReact.reactElement)=?,
        ~centerRipple: option(bool)=?,
        ~focusRipple: option(bool)=?,
        ~onBlur: option(ReactEventRe.Focus.t => unit)=?,
        ~onClick: option(ReactEventRe.Mouse.t => unit)=?,
        ~onFocus: option(ReactEventRe.Focus.t => unit)=?,
        ~onKeyboardFocus: option(ReactEventRe.Focus.t => unit)=?,
        ~onKeyDown: option(ReactEventRe.Keyboard.t => unit)=?,
        ~onKeyUp: option(ReactEventRe.Keyboard.t => unit)=?,
        ~onMouseDown: option(ReactEventRe.Mouse.t => unit)=?,
        ~onMouseLeave: option(ReactEventRe.Mouse.t => unit)=?,
        ~onMouseUp: option(ReactEventRe.Mouse.t => unit)=?,
        ~onTouchEnd: option(ReactEventRe.Touch.t => unit)=?,
        ~onTouchMove: option(ReactEventRe.Touch.t => unit)=?,
        ~onTouchStart: option(ReactEventRe.Touch.t => unit)=?,
        ~role: option(string)=?,
        ~tabIndex: option([ | `Int(int) | `Float(float) | `String(string)])=?,
        ~_TouchRippleProps: option(Js.t({..}))=?,
        ~classes: option(Classes.t)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~className?,
          ~color=?Js.Option.map((. v) => colorToJs(v), color),
          ~component=?Js.Option.map((. v) => unwrapValue(v), component),
          ~disabled?,
          ~disableFocusRipple?,
          ~disableRipple?,
          ~fullWidth?,
          ~href?,
          ~mini?,
          ~size=?Js.Option.map((. v) => sizeToJs(v), size),
          ~_type?,
          ~variant=?Js.Option.map((. v) => variantToJs(v), variant),
          ~buttonRef?,
          ~centerRipple?,
          ~focusRipple?,
          ~onBlur?,
          ~onClick?,
          ~onFocus?,
          ~onKeyboardFocus?,
          ~onKeyDown?,
          ~onKeyUp?,
          ~onMouseDown?,
          ~onMouseLeave?,
          ~onMouseUp?,
          ~onTouchEnd?,
          ~onTouchMove?,
          ~onTouchStart?,
          ~role?,
          ~tabIndex=?Js.Option.map((. v) => unwrapValue(v), tabIndex),
          ~_TouchRippleProps?,
          ~classes=?Js.Option.map((. v) => Classes.to_obj(v), classes),
          ~style?,
          (),
        ),
      children,
    );
};

module CardActions = {
  module Classes = {
    type classesType =
      | Root(string)
      | Action(string);
    type t = list(classesType);
    let to_string =
      fun
      | Root(_) => "root"
      | Action(_) => "action";
    let to_obj = listOfClasses =>
      listOfClasses
      |> StdLabels.List.fold_left(
           ~f=
             (obj, classType) => {
               switch (classType) {
               | Root(className)
               | Action(className) =>
                 Js.Dict.set(obj, to_string(classType), className)
               };
               obj;
             },
           ~init=Js.Dict.empty(),
         );
  };
  [@bs.module "material-ui/Card/CardActions"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~className: string=?,
      ~disableActionSpacing: bool=?,
      ~classes: Js.Dict.t(string)=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~className: option(string)=?,
        ~disableActionSpacing: option(bool)=?,
        ~classes: option(Classes.t)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~className?,
          ~disableActionSpacing?,
          ~classes=?Js.Option.map((. v) => Classes.to_obj(v), classes),
          ~style?,
          (),
        ),
      children,
    );
};

module CardContent = {
  module Classes = {
    type classesType =
      | Root(string);
    type t = list(classesType);
    let to_string =
      fun
      | Root(_) => "root";
    let to_obj = listOfClasses =>
      listOfClasses
      |> StdLabels.List.fold_left(
           ~f=
             (obj, classType) => {
               switch (classType) {
               | Root(className) =>
                 Js.Dict.set(obj, to_string(classType), className)
               };
               obj;
             },
           ~init=Js.Dict.empty(),
         );
  };
  [@bs.module "material-ui/Card/CardContent"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~className: string=?,
      ~component: 'union_1=?,
      ~classes: Js.Dict.t(string)=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~className: option(string)=?,
        ~component:
           option([ | `String(string) | `Element(ReasonReact.reactElement)])=?,
        ~classes: option(Classes.t)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~className?,
          ~component=?Js.Option.map((. v) => unwrapValue(v), component),
          ~classes=?Js.Option.map((. v) => Classes.to_obj(v), classes),
          ~style?,
          (),
        ),
      children,
    );
};

module CardHeader = {
  module Classes = {
    type classesType =
      | Root(string)
      | Avatar(string)
      | Action(string)
      | Content(string)
      | Title(string)
      | Subheader(string);
    type t = list(classesType);
    let to_string =
      fun
      | Root(_) => "root"
      | Avatar(_) => "avatar"
      | Action(_) => "action"
      | Content(_) => "content"
      | Title(_) => "title"
      | Subheader(_) => "subheader";
    let to_obj = listOfClasses =>
      listOfClasses
      |> StdLabels.List.fold_left(
           ~f=
             (obj, classType) => {
               switch (classType) {
               | Root(className)
               | Avatar(className)
               | Action(className)
               | Content(className)
               | Title(className)
               | Subheader(className) =>
                 Js.Dict.set(obj, to_string(classType), className)
               };
               obj;
             },
           ~init=Js.Dict.empty(),
         );
  };
  [@bs.module "material-ui/Card/CardHeader"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~action: ReasonReact.reactElement=?,
      ~avatar: ReasonReact.reactElement=?,
      ~className: string=?,
      ~component: 'union_k=?,
      ~subheader: ReasonReact.reactElement=?,
      ~title: ReasonReact.reactElement=?,
      ~classes: Js.Dict.t(string)=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~action: option(ReasonReact.reactElement)=?,
        ~avatar: option(ReasonReact.reactElement)=?,
        ~className: option(string)=?,
        ~component:
           option([ | `String(string) | `Element(ReasonReact.reactElement)])=?,
        ~subheader: option(ReasonReact.reactElement)=?,
        ~title: option(ReasonReact.reactElement)=?,
        ~classes: option(Classes.t)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~action?,
          ~avatar?,
          ~className?,
          ~component=?Js.Option.map((. v) => unwrapValue(v), component),
          ~subheader?,
          ~title?,
          ~classes=?Js.Option.map((. v) => Classes.to_obj(v), classes),
          ~style?,
          (),
        ),
      children,
    );
};

module CardMedia = {
  module Classes = {
    type classesType =
      | Root(string)
      | Media(string);
    type t = list(classesType);
    let to_string =
      fun
      | Root(_) => "root"
      | Media(_) => "media";
    let to_obj = listOfClasses =>
      listOfClasses
      |> StdLabels.List.fold_left(
           ~f=
             (obj, classType) => {
               switch (classType) {
               | Root(className)
               | Media(className) =>
                 Js.Dict.set(obj, to_string(classType), className)
               };
               obj;
             },
           ~init=Js.Dict.empty(),
         );
  };
  [@bs.module "material-ui/Card/CardMedia"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~className: string=?,
      ~component: 'union_q=?,
      ~image: string=?,
      ~src: string=?,
      ~classes: Js.Dict.t(string)=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~className: option(string)=?,
        ~component:
           option([ | `String(string) | `Element(ReasonReact.reactElement)])=?,
        ~image: option(string)=?,
        ~src: option(string)=?,
        ~classes: option(Classes.t)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~className?,
          ~component=?Js.Option.map((. v) => unwrapValue(v), component),
          ~image?,
          ~src?,
          ~classes=?Js.Option.map((. v) => Classes.to_obj(v), classes),
          ~style?,
          (),
        ),
      children,
    );
};

module Card = {
  [@bs.module "material-ui/Card/Card"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~raised: bool=?,
      ~className: string=?,
      ~component: 'union_h=?,
      ~elevation: 'number_j=?,
      ~square: bool=?,
      ~onClick: ReactEventRe.Mouse.t => unit=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~raised: option(bool)=?,
        ~className: option(string)=?,
        ~component:
           option([ | `String(string) | `Element(ReasonReact.reactElement)])=?,
        ~elevation: option([ | `Int(int) | `Float(float)])=?,
        ~square: option(bool)=?,
        ~onClick: option(ReactEventRe.Mouse.t => unit)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~raised?,
          ~className?,
          ~component=?Js.Option.map((. v) => unwrapValue(v), component),
          ~elevation=?Js.Option.map((. v) => unwrapValue(v), elevation),
          ~square?,
          ~onClick?,
          ~style?,
          (),
        ),
      children,
    );
};

module Checkbox = {
  [@bs.deriving jsConverter]
  type color = [
    | [@bs.as "primary"] `Primary
    | [@bs.as "secondary"] `Secondary
    | [@bs.as "default"] `Default
  ];
  module Classes = {
    type classesType =
      | Default(string)
      | Checked(string)
      | CheckedPrimary(string)
      | CheckedSecondary(string)
      | Disabled(string);
    type t = list(classesType);
    let to_string =
      fun
      | Default(_) => "default"
      | Checked(_) => "checked"
      | CheckedPrimary(_) => "checkedPrimary"
      | CheckedSecondary(_) => "checkedSecondary"
      | Disabled(_) => "disabled";
    let to_obj = listOfClasses =>
      listOfClasses
      |> StdLabels.List.fold_left(
           ~f=
             (obj, classType) => {
               switch (classType) {
               | Default(className)
               | Checked(className)
               | CheckedPrimary(className)
               | CheckedSecondary(className)
               | Disabled(className) =>
                 Js.Dict.set(obj, to_string(classType), className)
               };
               obj;
             },
           ~init=Js.Dict.empty(),
         );
  };
  [@bs.module "material-ui/Checkbox/Checkbox"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~checked: 'union_o=?,
      ~checkedIcon: ReasonReact.reactElement=?,
      ~color: string=?,
      ~disabled: bool=?,
      ~disableRipple: bool=?,
      ~icon: ReasonReact.reactElement=?,
      ~id: string=?,
      ~indeterminate: bool=?,
      ~indeterminateIcon: ReasonReact.reactElement=?,
      ~inputProps: Js.t({..})=?,
      ~inputRef: ReasonReact.reactElement=?,
      ~onChange: (ReactEventRe.Selection.t, bool) => unit=?,
      ~_type: string=?,
      ~value: string=?,
      ~classes: Js.Dict.t(string)=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~checked: option([ | `Bool(bool) | `String(string)])=?,
        ~checkedIcon: option(ReasonReact.reactElement)=?,
        ~color: option(color)=?,
        ~disabled: option(bool)=?,
        ~disableRipple: option(bool)=?,
        ~icon: option(ReasonReact.reactElement)=?,
        ~id: option(string)=?,
        ~indeterminate: option(bool)=?,
        ~indeterminateIcon: option(ReasonReact.reactElement)=?,
        ~inputProps: option(Js.t({..}))=?,
        ~inputRef: option(ReasonReact.reactElement)=?,
        ~onChange: option((ReactEventRe.Selection.t, bool) => unit)=?,
        ~_type: option(string)=?,
        ~value: option(string)=?,
        ~classes: option(Classes.t)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~checked=?Js.Option.map((. v) => unwrapValue(v), checked),
          ~checkedIcon?,
          ~color=?Js.Option.map((. v) => colorToJs(v), color),
          ~disabled?,
          ~disableRipple?,
          ~icon?,
          ~id?,
          ~indeterminate?,
          ~indeterminateIcon?,
          ~inputProps?,
          ~inputRef?,
          ~onChange?,
          ~_type?,
          ~value?,
          ~classes=?Js.Option.map((. v) => Classes.to_obj(v), classes),
          ~style?,
          (),
        ),
      children,
    );
};

module Chip = {
  module Classes = {
    type classesType =
      | Root(string)
      | Clickable(string)
      | Deletable(string)
      | Avatar(string)
      | AvatarChildren(string)
      | Label(string)
      | DeleteIcon(string);
    type t = list(classesType);
    let to_string =
      fun
      | Root(_) => "root"
      | Clickable(_) => "clickable"
      | Deletable(_) => "deletable"
      | Avatar(_) => "avatar"
      | AvatarChildren(_) => "avatarChildren"
      | Label(_) => "label"
      | DeleteIcon(_) => "deleteIcon";
    let to_obj = listOfClasses =>
      listOfClasses
      |> StdLabels.List.fold_left(
           ~f=
             (obj, classType) => {
               switch (classType) {
               | Root(className)
               | Clickable(className)
               | Deletable(className)
               | Avatar(className)
               | AvatarChildren(className)
               | Label(className)
               | DeleteIcon(className) =>
                 Js.Dict.set(obj, to_string(classType), className)
               };
               obj;
             },
           ~init=Js.Dict.empty(),
         );
  };
  [@bs.module "material-ui/Chip/Chip"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~avatar: ReasonReact.reactElement=?,
      ~className: string=?,
      ~component: 'union_8=?,
      ~deleteIcon: ReasonReact.reactElement=?,
      ~label: ReasonReact.reactElement=?,
      ~onClick: ReactEventRe.Mouse.t => unit=?,
      ~onDelete: unit => unit=?,
      ~onKeyDown: ReactEventRe.Keyboard.t => unit=?,
      ~tabIndex: 'union_k=?,
      ~classes: Js.Dict.t(string)=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~avatar: option(ReasonReact.reactElement)=?,
        ~className: option(string)=?,
        ~component:
           option([ | `String(string) | `Element(ReasonReact.reactElement)])=?,
        ~deleteIcon: option(ReasonReact.reactElement)=?,
        ~label: option(ReasonReact.reactElement)=?,
        ~onClick: option(ReactEventRe.Mouse.t => unit)=?,
        ~onDelete: option(unit => unit)=?,
        ~onKeyDown: option(ReactEventRe.Keyboard.t => unit)=?,
        ~tabIndex: option([ | `Int(int) | `Float(float) | `String(string)])=?,
        ~classes: option(Classes.t)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~avatar?,
          ~className?,
          ~component=?Js.Option.map((. v) => unwrapValue(v), component),
          ~deleteIcon?,
          ~label?,
          ~onClick?,
          ~onDelete?,
          ~onKeyDown?,
          ~tabIndex=?Js.Option.map((. v) => unwrapValue(v), tabIndex),
          ~classes=?Js.Option.map((. v) => Classes.to_obj(v), classes),
          ~style?,
          (),
        ),
      children,
    );
};

module CircularProgress = {
  [@bs.deriving jsConverter]
  type color = [
    | [@bs.as "primary"] `Primary
    | [@bs.as "secondary"] `Secondary
    | [@bs.as "inherit"] `Inherit
  ];
  [@bs.deriving jsConverter]
  type variant = [
    | [@bs.as "determinate"] `Determinate
    | [@bs.as "indeterminate"] `Indeterminate
    | [@bs.as "static"] `Static
  ];
  module Classes = {
    type classesType =
      | Root(string)
      | ColorPrimary(string)
      | ColorSecondary(string)
      | Svg(string)
      | SvgIndeterminate(string)
      | Circle(string)
      | CircleIndeterminate(string);
    type t = list(classesType);
    let to_string =
      fun
      | Root(_) => "root"
      | ColorPrimary(_) => "colorPrimary"
      | ColorSecondary(_) => "colorSecondary"
      | Svg(_) => "svg"
      | SvgIndeterminate(_) => "svgIndeterminate"
      | Circle(_) => "circle"
      | CircleIndeterminate(_) => "circleIndeterminate";
    let to_obj = listOfClasses =>
      listOfClasses
      |> StdLabels.List.fold_left(
           ~f=
             (obj, classType) => {
               switch (classType) {
               | Root(className)
               | ColorPrimary(className)
               | ColorSecondary(className)
               | Svg(className)
               | SvgIndeterminate(className)
               | Circle(className)
               | CircleIndeterminate(className) =>
                 Js.Dict.set(obj, to_string(classType), className)
               };
               obj;
             },
           ~init=Js.Dict.empty(),
         );
  };
  [@bs.module "material-ui/Progress/CircularProgress"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~className: string=?,
      ~color: string=?,
      ~max: 'number_m=?,
      ~min: 'number_5=?,
      ~size: 'union_w=?,
      ~thickness: 'number_t=?,
      ~value: 'number_4=?,
      ~variant: string=?,
      ~classes: Js.Dict.t(string)=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~className: option(string)=?,
        ~color: option(color)=?,
        ~max: option([ | `Int(int) | `Float(float)])=?,
        ~min: option([ | `Int(int) | `Float(float)])=?,
        ~size: option([ | `Int(int) | `Float(float) | `String(string)])=?,
        ~thickness: option([ | `Int(int) | `Float(float)])=?,
        ~value: option([ | `Int(int) | `Float(float)])=?,
        ~variant: option(variant)=?,
        ~classes: option(Classes.t)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~className?,
          ~color=?Js.Option.map((. v) => colorToJs(v), color),
          ~max=?Js.Option.map((. v) => unwrapValue(v), max),
          ~min=?Js.Option.map((. v) => unwrapValue(v), min),
          ~size=?Js.Option.map((. v) => unwrapValue(v), size),
          ~thickness=?Js.Option.map((. v) => unwrapValue(v), thickness),
          ~value=?Js.Option.map((. v) => unwrapValue(v), value),
          ~variant=?Js.Option.map((. v) => variantToJs(v), variant),
          ~classes=?Js.Option.map((. v) => Classes.to_obj(v), classes),
          ~style?,
          (),
        ),
      children,
    );
};

module ClickAwayListener = {
  [@bs.deriving jsConverter]
  type mouseEvent = [
    | [@bs.as "onClick"] `OnClick
    | [@bs.as "onMouseDown"] `OnMouseDown
    | [@bs.as "onMouseUp"] `OnMouseUp
    | [@bs.as "0"] `False
  ];
  [@bs.deriving jsConverter]
  type touchEvent = [
    | [@bs.as "onTouchStart"] `OnTouchStart
    | [@bs.as "onTouchEnd"] `OnTouchEnd
    | [@bs.as "0"] `False
  ];
  [@bs.module "material-ui/utils/ClickAwayListener"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~mouseEvent: string=?,
      ~onClickAway: ReactEventRe.Mouse.t => unit,
      ~touchEvent: string=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~mouseEvent: option(mouseEvent)=?,
        ~onClickAway: ReactEventRe.Mouse.t => unit,
        ~touchEvent: option(touchEvent)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~mouseEvent=?
            Js.Option.map((. v) => mouseEventToJs(v), mouseEvent),
          ~onClickAway,
          ~touchEvent=?
            Js.Option.map((. v) => touchEventToJs(v), touchEvent),
          ~style?,
          (),
        ),
      children,
    );
};

module Collapse = {
  [@bs.deriving jsConverter]
  type timeoutShape = {
    enter: int,
    exit: int,
  };
  [@bs.deriving jsConverter]
  type timeout = [ | [@bs.as "auto"] `Auto];
  module Classes = {
    type classesType =
      | Container(string)
      | Entered(string)
      | Wrapper(string)
      | WrapperInner(string);
    type t = list(classesType);
    let to_string =
      fun
      | Container(_) => "container"
      | Entered(_) => "entered"
      | Wrapper(_) => "wrapper"
      | WrapperInner(_) => "wrapperInner";
    let to_obj = listOfClasses =>
      listOfClasses
      |> StdLabels.List.fold_left(
           ~f=
             (obj, classType) => {
               switch (classType) {
               | Container(className)
               | Entered(className)
               | Wrapper(className)
               | WrapperInner(className) =>
                 Js.Dict.set(obj, to_string(classType), className)
               };
               obj;
             },
           ~init=Js.Dict.empty(),
         );
  };
  [@bs.module "material-ui/transitions/Collapse"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~className: string=?,
      ~collapsedHeight: string=?,
      ~component: 'union_f=?,
      ~_in: bool=?,
      ~onEnter: unit => unit=?,
      ~onEntered: unit => unit=?,
      ~onEntering: unit => unit=?,
      ~onExit: unit => unit=?,
      ~onExiting: unit => unit=?,
      ~theme: Js.t({..}),
      ~timeout: 'union_z=?,
      ~classes: Js.Dict.t(string)=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~className: option(string)=?,
        ~collapsedHeight: option(string)=?,
        ~component:
           option([ | `String(string) | `Element(ReasonReact.reactElement)])=?,
        ~_in: option(bool)=?,
        ~onEnter: option(unit => unit)=?,
        ~onEntered: option(unit => unit)=?,
        ~onEntering: option(unit => unit)=?,
        ~onExit: option(unit => unit)=?,
        ~onExiting: option(unit => unit)=?,
        ~theme: Js.t({..}),
        ~timeout:
           option(
             [
               | `Int(int)
               | `Float(float)
               | `Object(timeoutShape)
               | `Enum(timeout)
             ],
           )=?,
        ~classes: option(Classes.t)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~className?,
          ~collapsedHeight?,
          ~component=?Js.Option.map((. v) => unwrapValue(v), component),
          ~_in?,
          ~onEnter?,
          ~onEntered?,
          ~onEntering?,
          ~onExit?,
          ~onExiting?,
          ~theme,
          ~timeout=?
            Js.Option.map(
              (. v) =>
                switch (v) {
                | `Enum(v) => unwrapValue(`String(timeoutToJs(v)))
                | `Object(v) => unwrapValue(`Element(timeoutShapeToJs(v)))
                | v => unwrapValue(v)
                },
              timeout,
            ),
          ~classes=?Js.Option.map((. v) => Classes.to_obj(v), classes),
          ~style?,
          (),
        ),
      children,
    );
};

module CssBaseline = {
  [@bs.module "material-ui/CssBaseline/CssBaseline"]
  external reactClass : ReasonReact.reactClass = "default";
  let make = children =>
    ReasonReact.wrapJsForReason(~reactClass, ~props=Js.Obj.empty(), children);
};

module DialogActions = {
  module Classes = {
    type classesType =
      | Root(string)
      | Action(string);
    type t = list(classesType);
    let to_string =
      fun
      | Root(_) => "root"
      | Action(_) => "action";
    let to_obj = listOfClasses =>
      listOfClasses
      |> StdLabels.List.fold_left(
           ~f=
             (obj, classType) => {
               switch (classType) {
               | Root(className)
               | Action(className) =>
                 Js.Dict.set(obj, to_string(classType), className)
               };
               obj;
             },
           ~init=Js.Dict.empty(),
         );
  };
  [@bs.module "material-ui/Dialog/DialogActions"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~className: string=?,
      ~disableActionSpacing: bool=?,
      ~classes: Js.Dict.t(string)=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~className: option(string)=?,
        ~disableActionSpacing: option(bool)=?,
        ~classes: option(Classes.t)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~className?,
          ~disableActionSpacing?,
          ~classes=?Js.Option.map((. v) => Classes.to_obj(v), classes),
          ~style?,
          (),
        ),
      children,
    );
};

module DialogContentText = {
  [@bs.deriving jsConverter]
  type align = [
    | [@bs.as "inherit"] `Inherit
    | [@bs.as "left"] `Left
    | [@bs.as "center"] `Center
    | [@bs.as "right"] `Right
    | [@bs.as "justify"] `Justify
  ];
  [@bs.deriving jsConverter]
  type color = [
    | [@bs.as "inherit"] `Inherit
    | [@bs.as "primary"] `Primary
    | [@bs.as "textSecondary"] `TextSecondary
    | [@bs.as "secondary"] `Secondary
    | [@bs.as "error"] `Error
    | [@bs.as "default"] `Default
  ];
  [@bs.deriving jsConverter]
  type variant = [
    | [@bs.as "display4"] `Display4
    | [@bs.as "display3"] `Display3
    | [@bs.as "display2"] `Display2
    | [@bs.as "display1"] `Display1
    | [@bs.as "headline"] `Headline
    | [@bs.as "title"] `Title
    | [@bs.as "subheading"] `Subheading
    | [@bs.as "body2"] `Body2
    | [@bs.as "body1"] `Body1
    | [@bs.as "caption"] `Caption
    | [@bs.as "button"] `Button
  ];
  module Classes = {
    type classesType =
      | Root(string);
    type t = list(classesType);
    let to_string =
      fun
      | Root(_) => "root";
    let to_obj = listOfClasses =>
      listOfClasses
      |> StdLabels.List.fold_left(
           ~f=
             (obj, classType) => {
               switch (classType) {
               | Root(className) =>
                 Js.Dict.set(obj, to_string(classType), className)
               };
               obj;
             },
           ~init=Js.Dict.empty(),
         );
  };
  [@bs.module "material-ui/Dialog/DialogContentText"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~className: string=?,
      ~align: string=?,
      ~color: string=?,
      ~component: 'union_y=?,
      ~gutterBottom: bool=?,
      ~headlineMapping: Js.t({..})=?,
      ~noWrap: bool=?,
      ~paragraph: bool=?,
      ~variant: string=?,
      ~classes: Js.Dict.t(string)=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~className: option(string)=?,
        ~align: option(align)=?,
        ~color: option(color)=?,
        ~component:
           option([ | `String(string) | `Element(ReasonReact.reactElement)])=?,
        ~gutterBottom: option(bool)=?,
        ~headlineMapping: option(Js.t({..}))=?,
        ~noWrap: option(bool)=?,
        ~paragraph: option(bool)=?,
        ~variant: option(variant)=?,
        ~classes: option(Classes.t)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~className?,
          ~align=?Js.Option.map((. v) => alignToJs(v), align),
          ~color=?Js.Option.map((. v) => colorToJs(v), color),
          ~component=?Js.Option.map((. v) => unwrapValue(v), component),
          ~gutterBottom?,
          ~headlineMapping?,
          ~noWrap?,
          ~paragraph?,
          ~variant=?Js.Option.map((. v) => variantToJs(v), variant),
          ~classes=?Js.Option.map((. v) => Classes.to_obj(v), classes),
          ~style?,
          (),
        ),
      children,
    );
};

module DialogContent = {
  module Classes = {
    type classesType =
      | Root(string);
    type t = list(classesType);
    let to_string =
      fun
      | Root(_) => "root";
    let to_obj = listOfClasses =>
      listOfClasses
      |> StdLabels.List.fold_left(
           ~f=
             (obj, classType) => {
               switch (classType) {
               | Root(className) =>
                 Js.Dict.set(obj, to_string(classType), className)
               };
               obj;
             },
           ~init=Js.Dict.empty(),
         );
  };
  [@bs.module "material-ui/Dialog/DialogContent"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~className: string=?,
      ~classes: Js.Dict.t(string)=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~className: option(string)=?,
        ~classes: option(Classes.t)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~className?,
          ~classes=?Js.Option.map((. v) => Classes.to_obj(v), classes),
          ~style?,
          (),
        ),
      children,
    );
};

module DialogTitle = {
  module Classes = {
    type classesType =
      | Root(string);
    type t = list(classesType);
    let to_string =
      fun
      | Root(_) => "root";
    let to_obj = listOfClasses =>
      listOfClasses
      |> StdLabels.List.fold_left(
           ~f=
             (obj, classType) => {
               switch (classType) {
               | Root(className) =>
                 Js.Dict.set(obj, to_string(classType), className)
               };
               obj;
             },
           ~init=Js.Dict.empty(),
         );
  };
  [@bs.module "material-ui/Dialog/DialogTitle"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~className: string=?,
      ~disableTypography: bool=?,
      ~classes: Js.Dict.t(string)=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~className: option(string)=?,
        ~disableTypography: option(bool)=?,
        ~classes: option(Classes.t)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~className?,
          ~disableTypography?,
          ~classes=?Js.Option.map((. v) => Classes.to_obj(v), classes),
          ~style?,
          (),
        ),
      children,
    );
};

module Dialog = {
  [@bs.deriving jsConverter]
  type maxWidth = [
    | [@bs.as "xs"] `Xs
    | [@bs.as "sm"] `Sm
    | [@bs.as "md"] `Md
    | [@bs.as "0"] `False
  ];
  [@bs.deriving jsConverter]
  type transitionDurationShape = {
    enter: int,
    exit: int,
  };
  module Classes = {
    type classesType =
      | Root(string)
      | Paper(string)
      | PaperWidthXs(string)
      | PaperWidthSm(string)
      | PaperWidthMd(string)
      | PaperFullWidth(string)
      | PaperFullScreen(string);
    type t = list(classesType);
    let to_string =
      fun
      | Root(_) => "root"
      | Paper(_) => "paper"
      | PaperWidthXs(_) => "paperWidthXs"
      | PaperWidthSm(_) => "paperWidthSm"
      | PaperWidthMd(_) => "paperWidthMd"
      | PaperFullWidth(_) => "paperFullWidth"
      | PaperFullScreen(_) => "paperFullScreen";
    let to_obj = listOfClasses =>
      listOfClasses
      |> StdLabels.List.fold_left(
           ~f=
             (obj, classType) => {
               switch (classType) {
               | Root(className)
               | Paper(className)
               | PaperWidthXs(className)
               | PaperWidthSm(className)
               | PaperWidthMd(className)
               | PaperFullWidth(className)
               | PaperFullScreen(className) =>
                 Js.Dict.set(obj, to_string(classType), className)
               };
               obj;
             },
           ~init=Js.Dict.empty(),
         );
  };
  [@bs.module "material-ui/Dialog/Dialog"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~className: string=?,
      ~disableBackdropClick: bool=?,
      ~disableEscapeKeyDown: bool=?,
      ~fullScreen: bool=?,
      ~fullWidth: bool=?,
      ~maxWidth: string=?,
      ~onBackdropClick: ReactEventRe.Mouse.t => unit=?,
      ~onClose: unit => unit=?,
      ~onEnter: unit => unit=?,
      ~onEntered: unit => unit=?,
      ~onEntering: unit => unit=?,
      ~onEscapeKeyDown: ReactEventRe.Keyboard.t => unit=?,
      ~onExit: unit => unit=?,
      ~onExited: unit => unit=?,
      ~onExiting: unit => unit=?,
      ~_open: bool,
      ~_PaperProps: Js.t({..})=?,
      ~transition: 'union_m=?,
      ~transitionDuration: 'union_d=?,
      ~_BackdropComponent: 'union_u=?,
      ~_BackdropProps: Js.t({..})=?,
      ~container: 'union_l=?,
      ~disableAutoFocus: bool=?,
      ~disableEnforceFocus: bool=?,
      ~disableRestoreFocus: bool=?,
      ~hideBackdrop: bool=?,
      ~keepMounted: bool=?,
      ~manager: Js.t({..})=?,
      ~onRendered: unit => unit=?,
      ~classes: Js.Dict.t(string)=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~className: option(string)=?,
        ~disableBackdropClick: option(bool)=?,
        ~disableEscapeKeyDown: option(bool)=?,
        ~fullScreen: option(bool)=?,
        ~fullWidth: option(bool)=?,
        ~maxWidth: option(maxWidth)=?,
        ~onBackdropClick: option(ReactEventRe.Mouse.t => unit)=?,
        ~onClose: option(unit => unit)=?,
        ~onEnter: option(unit => unit)=?,
        ~onEntered: option(unit => unit)=?,
        ~onEntering: option(unit => unit)=?,
        ~onEscapeKeyDown: option(ReactEventRe.Keyboard.t => unit)=?,
        ~onExit: option(unit => unit)=?,
        ~onExited: option(unit => unit)=?,
        ~onExiting: option(unit => unit)=?,
        ~_open: bool,
        ~_PaperProps: option(Js.t({..}))=?,
        ~transition:
           option([ | `String(string) | `Element(ReasonReact.reactElement)])=?,
        ~transitionDuration:
           option(
             [
               | `Int(int)
               | `Float(float)
               | `Object(transitionDurationShape)
             ],
           )=?,
        ~_BackdropComponent:
           option([ | `String(string) | `Element(ReasonReact.reactElement)])=?,
        ~_BackdropProps: option(Js.t({..}))=?,
        ~container:
           option(
             [
               | `ObjectGeneric(Js.t({..}))
               | `Element(ReasonReact.reactElement)
             ],
           )=?,
        ~disableAutoFocus: option(bool)=?,
        ~disableEnforceFocus: option(bool)=?,
        ~disableRestoreFocus: option(bool)=?,
        ~hideBackdrop: option(bool)=?,
        ~keepMounted: option(bool)=?,
        ~manager: option(Js.t({..}))=?,
        ~onRendered: option(unit => unit)=?,
        ~classes: option(Classes.t)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~className?,
          ~disableBackdropClick?,
          ~disableEscapeKeyDown?,
          ~fullScreen?,
          ~fullWidth?,
          ~maxWidth=?Js.Option.map((. v) => maxWidthToJs(v), maxWidth),
          ~onBackdropClick?,
          ~onClose?,
          ~onEnter?,
          ~onEntered?,
          ~onEntering?,
          ~onEscapeKeyDown?,
          ~onExit?,
          ~onExited?,
          ~onExiting?,
          ~_open,
          ~_PaperProps?,
          ~transition=?Js.Option.map((. v) => unwrapValue(v), transition),
          ~transitionDuration=?
            Js.Option.map(
              (. v) =>
                switch (v) {
                | `Object(v) =>
                  unwrapValue(`Element(transitionDurationShapeToJs(v)))
                | v => unwrapValue(v)
                },
              transitionDuration,
            ),
          ~_BackdropComponent=?
            Js.Option.map((. v) => unwrapValue(v), _BackdropComponent),
          ~_BackdropProps?,
          ~container=?Js.Option.map((. v) => unwrapValue(v), container),
          ~disableAutoFocus?,
          ~disableEnforceFocus?,
          ~disableRestoreFocus?,
          ~hideBackdrop?,
          ~keepMounted?,
          ~manager?,
          ~onRendered?,
          ~classes=?Js.Option.map((. v) => Classes.to_obj(v), classes),
          ~style?,
          (),
        ),
      children,
    );
};

module Divider = {
  module Classes = {
    type classesType =
      | Root(string)
      | Absolute(string)
      | Inset(string)
      | Light(string);
    type t = list(classesType);
    let to_string =
      fun
      | Root(_) => "root"
      | Absolute(_) => "absolute"
      | Inset(_) => "inset"
      | Light(_) => "light";
    let to_obj = listOfClasses =>
      listOfClasses
      |> StdLabels.List.fold_left(
           ~f=
             (obj, classType) => {
               switch (classType) {
               | Root(className)
               | Absolute(className)
               | Inset(className)
               | Light(className) =>
                 Js.Dict.set(obj, to_string(classType), className)
               };
               obj;
             },
           ~init=Js.Dict.empty(),
         );
  };
  [@bs.module "material-ui/Divider/Divider"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~absolute: bool=?,
      ~className: string=?,
      ~component: 'union_4=?,
      ~inset: bool=?,
      ~light: bool=?,
      ~classes: Js.Dict.t(string)=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~absolute: option(bool)=?,
        ~className: option(string)=?,
        ~component:
           option([ | `String(string) | `Element(ReasonReact.reactElement)])=?,
        ~inset: option(bool)=?,
        ~light: option(bool)=?,
        ~classes: option(Classes.t)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~absolute?,
          ~className?,
          ~component=?Js.Option.map((. v) => unwrapValue(v), component),
          ~inset?,
          ~light?,
          ~classes=?Js.Option.map((. v) => Classes.to_obj(v), classes),
          ~style?,
          (),
        ),
      children,
    );
};

module Drawer = {
  [@bs.deriving jsConverter]
  type anchor = [
    | [@bs.as "left"] `Left
    | [@bs.as "top"] `Top
    | [@bs.as "right"] `Right
    | [@bs.as "bottom"] `Bottom
  ];
  [@bs.deriving jsConverter]
  type transitionDurationShape = {
    enter: int,
    exit: int,
  };
  [@bs.deriving jsConverter]
  type variant = [
    | [@bs.as "permanent"] `Permanent
    | [@bs.as "persistent"] `Persistent
    | [@bs.as "temporary"] `Temporary
  ];
  module Classes = {
    type classesType =
      | Docked(string)
      | Paper(string)
      | PaperAnchorLeft(string)
      | PaperAnchorRight(string)
      | PaperAnchorTop(string)
      | PaperAnchorBottom(string)
      | PaperAnchorDockedLeft(string)
      | PaperAnchorDockedTop(string)
      | PaperAnchorDockedRight(string)
      | PaperAnchorDockedBottom(string)
      | Modal(string);
    type t = list(classesType);
    let to_string =
      fun
      | Docked(_) => "docked"
      | Paper(_) => "paper"
      | PaperAnchorLeft(_) => "paperAnchorLeft"
      | PaperAnchorRight(_) => "paperAnchorRight"
      | PaperAnchorTop(_) => "paperAnchorTop"
      | PaperAnchorBottom(_) => "paperAnchorBottom"
      | PaperAnchorDockedLeft(_) => "paperAnchorDockedLeft"
      | PaperAnchorDockedTop(_) => "paperAnchorDockedTop"
      | PaperAnchorDockedRight(_) => "paperAnchorDockedRight"
      | PaperAnchorDockedBottom(_) => "paperAnchorDockedBottom"
      | Modal(_) => "modal";
    let to_obj = listOfClasses =>
      listOfClasses
      |> StdLabels.List.fold_left(
           ~f=
             (obj, classType) => {
               switch (classType) {
               | Docked(className)
               | Paper(className)
               | PaperAnchorLeft(className)
               | PaperAnchorRight(className)
               | PaperAnchorTop(className)
               | PaperAnchorBottom(className)
               | PaperAnchorDockedLeft(className)
               | PaperAnchorDockedTop(className)
               | PaperAnchorDockedRight(className)
               | PaperAnchorDockedBottom(className)
               | Modal(className) =>
                 Js.Dict.set(obj, to_string(classType), className)
               };
               obj;
             },
           ~init=Js.Dict.empty(),
         );
  };
  [@bs.module "material-ui/Drawer/Drawer"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~anchor: string=?,
      ~className: string=?,
      ~elevation: 'number_p=?,
      ~_ModalProps: Js.t({..})=?,
      ~onClose: unit => unit=?,
      ~_open: bool=?,
      ~_PaperProps: Js.t({..})=?,
      ~_SlideProps: Js.t({..})=?,
      ~theme: Js.t({..}),
      ~transitionDuration: 'union_1=?,
      ~variant: string=?,
      ~classes: Js.Dict.t(string)=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~anchor: option(anchor)=?,
        ~className: option(string)=?,
        ~elevation: option([ | `Int(int) | `Float(float)])=?,
        ~_ModalProps: option(Js.t({..}))=?,
        ~onClose: option(unit => unit)=?,
        ~_open: option(bool)=?,
        ~_PaperProps: option(Js.t({..}))=?,
        ~_SlideProps: option(Js.t({..}))=?,
        ~theme: Js.t({..}),
        ~transitionDuration:
           option(
             [
               | `Int(int)
               | `Float(float)
               | `Object(transitionDurationShape)
             ],
           )=?,
        ~variant: option(variant)=?,
        ~classes: option(Classes.t)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~anchor=?Js.Option.map((. v) => anchorToJs(v), anchor),
          ~className?,
          ~elevation=?Js.Option.map((. v) => unwrapValue(v), elevation),
          ~_ModalProps?,
          ~onClose?,
          ~_open?,
          ~_PaperProps?,
          ~_SlideProps?,
          ~theme,
          ~transitionDuration=?
            Js.Option.map(
              (. v) =>
                switch (v) {
                | `Object(v) =>
                  unwrapValue(`Element(transitionDurationShapeToJs(v)))
                | v => unwrapValue(v)
                },
              transitionDuration,
            ),
          ~variant=?Js.Option.map((. v) => variantToJs(v), variant),
          ~classes=?Js.Option.map((. v) => Classes.to_obj(v), classes),
          ~style?,
          (),
        ),
      children,
    );
};

module ExpansionPanelActions = {
  module Classes = {
    type classesType =
      | Root(string)
      | Action(string);
    type t = list(classesType);
    let to_string =
      fun
      | Root(_) => "root"
      | Action(_) => "action";
    let to_obj = listOfClasses =>
      listOfClasses
      |> StdLabels.List.fold_left(
           ~f=
             (obj, classType) => {
               switch (classType) {
               | Root(className)
               | Action(className) =>
                 Js.Dict.set(obj, to_string(classType), className)
               };
               obj;
             },
           ~init=Js.Dict.empty(),
         );
  };
  [@bs.module "material-ui/ExpansionPanel/ExpansionPanelActions"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~className: string=?,
      ~classes: Js.Dict.t(string)=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~className: option(string)=?,
        ~classes: option(Classes.t)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~className?,
          ~classes=?Js.Option.map((. v) => Classes.to_obj(v), classes),
          ~style?,
          (),
        ),
      children,
    );
};

module ExpansionPanelDetails = {
  module Classes = {
    type classesType =
      | Root(string);
    type t = list(classesType);
    let to_string =
      fun
      | Root(_) => "root";
    let to_obj = listOfClasses =>
      listOfClasses
      |> StdLabels.List.fold_left(
           ~f=
             (obj, classType) => {
               switch (classType) {
               | Root(className) =>
                 Js.Dict.set(obj, to_string(classType), className)
               };
               obj;
             },
           ~init=Js.Dict.empty(),
         );
  };
  [@bs.module "material-ui/ExpansionPanel/ExpansionPanelDetails"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~className: string=?,
      ~classes: Js.Dict.t(string)=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~className: option(string)=?,
        ~classes: option(Classes.t)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~className?,
          ~classes=?Js.Option.map((. v) => Classes.to_obj(v), classes),
          ~style?,
          (),
        ),
      children,
    );
};

module ExpansionPanelSummary = {
  module Classes = {
    type classesType =
      | Root(string)
      | Expanded(string)
      | Focused(string)
      | Disabled(string)
      | Content(string)
      | ContentExpanded(string)
      | ExpandIcon(string)
      | ExpandIconExpanded(string);
    type t = list(classesType);
    let to_string =
      fun
      | Root(_) => "root"
      | Expanded(_) => "expanded"
      | Focused(_) => "focused"
      | Disabled(_) => "disabled"
      | Content(_) => "content"
      | ContentExpanded(_) => "contentExpanded"
      | ExpandIcon(_) => "expandIcon"
      | ExpandIconExpanded(_) => "expandIconExpanded";
    let to_obj = listOfClasses =>
      listOfClasses
      |> StdLabels.List.fold_left(
           ~f=
             (obj, classType) => {
               switch (classType) {
               | Root(className)
               | Expanded(className)
               | Focused(className)
               | Disabled(className)
               | Content(className)
               | ContentExpanded(className)
               | ExpandIcon(className)
               | ExpandIconExpanded(className) =>
                 Js.Dict.set(obj, to_string(classType), className)
               };
               obj;
             },
           ~init=Js.Dict.empty(),
         );
  };
  [@bs.module "material-ui/ExpansionPanel/ExpansionPanelSummary"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~className: string=?,
      ~disabled: bool=?,
      ~expanded: bool=?,
      ~expandIcon: ReasonReact.reactElement=?,
      ~onChange: ReactEventRe.Form.t => unit=?,
      ~onClick: ReactEventRe.Mouse.t => unit=?,
      ~buttonRef: ReasonReact.reactElement=?,
      ~centerRipple: bool=?,
      ~component: 'union_0=?,
      ~disableRipple: bool=?,
      ~focusRipple: bool=?,
      ~onBlur: ReactEventRe.Focus.t => unit=?,
      ~onFocus: ReactEventRe.Focus.t => unit=?,
      ~onKeyboardFocus: ReactEventRe.Focus.t => unit=?,
      ~onKeyDown: ReactEventRe.Keyboard.t => unit=?,
      ~onKeyUp: ReactEventRe.Keyboard.t => unit=?,
      ~onMouseDown: ReactEventRe.Mouse.t => unit=?,
      ~onMouseLeave: ReactEventRe.Mouse.t => unit=?,
      ~onMouseUp: ReactEventRe.Mouse.t => unit=?,
      ~onTouchEnd: ReactEventRe.Touch.t => unit=?,
      ~onTouchMove: ReactEventRe.Touch.t => unit=?,
      ~onTouchStart: ReactEventRe.Touch.t => unit=?,
      ~role: string=?,
      ~tabIndex: 'union_o=?,
      ~_TouchRippleProps: Js.t({..})=?,
      ~_type: string=?,
      ~classes: Js.Dict.t(string)=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~className: option(string)=?,
        ~disabled: option(bool)=?,
        ~expanded: option(bool)=?,
        ~expandIcon: option(ReasonReact.reactElement)=?,
        ~onChange: option(ReactEventRe.Form.t => unit)=?,
        ~onClick: option(ReactEventRe.Mouse.t => unit)=?,
        ~buttonRef: option(ReasonReact.reactElement)=?,
        ~centerRipple: option(bool)=?,
        ~component:
           option([ | `String(string) | `Element(ReasonReact.reactElement)])=?,
        ~disableRipple: option(bool)=?,
        ~focusRipple: option(bool)=?,
        ~onBlur: option(ReactEventRe.Focus.t => unit)=?,
        ~onFocus: option(ReactEventRe.Focus.t => unit)=?,
        ~onKeyboardFocus: option(ReactEventRe.Focus.t => unit)=?,
        ~onKeyDown: option(ReactEventRe.Keyboard.t => unit)=?,
        ~onKeyUp: option(ReactEventRe.Keyboard.t => unit)=?,
        ~onMouseDown: option(ReactEventRe.Mouse.t => unit)=?,
        ~onMouseLeave: option(ReactEventRe.Mouse.t => unit)=?,
        ~onMouseUp: option(ReactEventRe.Mouse.t => unit)=?,
        ~onTouchEnd: option(ReactEventRe.Touch.t => unit)=?,
        ~onTouchMove: option(ReactEventRe.Touch.t => unit)=?,
        ~onTouchStart: option(ReactEventRe.Touch.t => unit)=?,
        ~role: option(string)=?,
        ~tabIndex: option([ | `Int(int) | `Float(float) | `String(string)])=?,
        ~_TouchRippleProps: option(Js.t({..}))=?,
        ~_type: option(string)=?,
        ~classes: option(Classes.t)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~className?,
          ~disabled?,
          ~expanded?,
          ~expandIcon?,
          ~onChange?,
          ~onClick?,
          ~buttonRef?,
          ~centerRipple?,
          ~component=?Js.Option.map((. v) => unwrapValue(v), component),
          ~disableRipple?,
          ~focusRipple?,
          ~onBlur?,
          ~onFocus?,
          ~onKeyboardFocus?,
          ~onKeyDown?,
          ~onKeyUp?,
          ~onMouseDown?,
          ~onMouseLeave?,
          ~onMouseUp?,
          ~onTouchEnd?,
          ~onTouchMove?,
          ~onTouchStart?,
          ~role?,
          ~tabIndex=?Js.Option.map((. v) => unwrapValue(v), tabIndex),
          ~_TouchRippleProps?,
          ~_type?,
          ~classes=?Js.Option.map((. v) => Classes.to_obj(v), classes),
          ~style?,
          (),
        ),
      children,
    );
};

module ExpansionPanel = {
  module Classes = {
    type classesType =
      | Root(string)
      | Expanded(string)
      | Disabled(string);
    type t = list(classesType);
    let to_string =
      fun
      | Root(_) => "root"
      | Expanded(_) => "expanded"
      | Disabled(_) => "disabled";
    let to_obj = listOfClasses =>
      listOfClasses
      |> StdLabels.List.fold_left(
           ~f=
             (obj, classType) => {
               switch (classType) {
               | Root(className)
               | Expanded(className)
               | Disabled(className) =>
                 Js.Dict.set(obj, to_string(classType), className)
               };
               obj;
             },
           ~init=Js.Dict.empty(),
         );
  };
  [@bs.module "material-ui/ExpansionPanel/ExpansionPanel"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~className: string=?,
      ~_CollapseProps: Js.t({..})=?,
      ~defaultExpanded: bool=?,
      ~disabled: bool=?,
      ~expanded: bool=?,
      ~onChange: ReactEventRe.Form.t => unit=?,
      ~component: 'union_h=?,
      ~elevation: 'number_j=?,
      ~square: bool=?,
      ~classes: Js.Dict.t(string)=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~className: option(string)=?,
        ~_CollapseProps: option(Js.t({..}))=?,
        ~defaultExpanded: option(bool)=?,
        ~disabled: option(bool)=?,
        ~expanded: option(bool)=?,
        ~onChange: option(ReactEventRe.Form.t => unit)=?,
        ~component:
           option([ | `String(string) | `Element(ReasonReact.reactElement)])=?,
        ~elevation: option([ | `Int(int) | `Float(float)])=?,
        ~square: option(bool)=?,
        ~classes: option(Classes.t)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~className?,
          ~_CollapseProps?,
          ~defaultExpanded?,
          ~disabled?,
          ~expanded?,
          ~onChange?,
          ~component=?Js.Option.map((. v) => unwrapValue(v), component),
          ~elevation=?Js.Option.map((. v) => unwrapValue(v), elevation),
          ~square?,
          ~classes=?Js.Option.map((. v) => Classes.to_obj(v), classes),
          ~style?,
          (),
        ),
      children,
    );
};

module Fade = {
  [@bs.deriving jsConverter]
  type timeoutShape = {
    enter: int,
    exit: int,
  };
  [@bs.module "material-ui/transitions/Fade"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~_in: bool=?,
      ~onEnter: unit => unit=?,
      ~onExit: unit => unit=?,
      ~theme: Js.t({..}),
      ~timeout: 'union_5=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~_in: option(bool)=?,
        ~onEnter: option(unit => unit)=?,
        ~onExit: option(unit => unit)=?,
        ~theme: Js.t({..}),
        ~timeout:
           option([ | `Int(int) | `Float(float) | `Object(timeoutShape)])=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~_in?,
          ~onEnter?,
          ~onExit?,
          ~theme,
          ~timeout=?
            Js.Option.map(
              (. v) =>
                switch (v) {
                | `Object(v) => unwrapValue(`Element(timeoutShapeToJs(v)))
                | v => unwrapValue(v)
                },
              timeout,
            ),
          ~style?,
          (),
        ),
      children,
    );
};

module FormControlLabel = {
  module Classes = {
    type classesType =
      | Root(string)
      | Disabled(string)
      | Label(string)
      | LabelDisabled(string);
    type t = list(classesType);
    let to_string =
      fun
      | Root(_) => "root"
      | Disabled(_) => "disabled"
      | Label(_) => "label"
      | LabelDisabled(_) => "labelDisabled";
    let to_obj = listOfClasses =>
      listOfClasses
      |> StdLabels.List.fold_left(
           ~f=
             (obj, classType) => {
               switch (classType) {
               | Root(className)
               | Disabled(className)
               | Label(className)
               | LabelDisabled(className) =>
                 Js.Dict.set(obj, to_string(classType), className)
               };
               obj;
             },
           ~init=Js.Dict.empty(),
         );
  };
  [@bs.module "material-ui/Form/FormControlLabel"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~checked: 'union_8=?,
      ~className: string=?,
      ~control: ReasonReact.reactElement=?,
      ~disabled: bool=?,
      ~inputRef: ReasonReact.reactElement=?,
      ~label: ReasonReact.reactElement=?,
      ~name: string=?,
      ~onChange: ReactEventRe.Form.t => unit=?,
      ~value: string=?,
      ~classes: Js.Dict.t(string)=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~checked: option([ | `Bool(bool) | `String(string)])=?,
        ~className: option(string)=?,
        ~control: option(ReasonReact.reactElement)=?,
        ~disabled: option(bool)=?,
        ~inputRef: option(ReasonReact.reactElement)=?,
        ~label: option(ReasonReact.reactElement)=?,
        ~name: option(string)=?,
        ~onChange: option(ReactEventRe.Form.t => unit)=?,
        ~value: option(string)=?,
        ~classes: option(Classes.t)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~checked=?Js.Option.map((. v) => unwrapValue(v), checked),
          ~className?,
          ~control?,
          ~disabled?,
          ~inputRef?,
          ~label?,
          ~name?,
          ~onChange?,
          ~value?,
          ~classes=?Js.Option.map((. v) => Classes.to_obj(v), classes),
          ~style?,
          (),
        ),
      children,
    );
};

module FormControl = {
  [@bs.deriving jsConverter]
  type margin = [
    | [@bs.as "none"] `None
    | [@bs.as "dense"] `Dense
    | [@bs.as "normal"] `Normal
  ];
  module Classes = {
    type classesType =
      | Root(string)
      | MarginNormal(string)
      | MarginDense(string)
      | FullWidth(string);
    type t = list(classesType);
    let to_string =
      fun
      | Root(_) => "root"
      | MarginNormal(_) => "marginNormal"
      | MarginDense(_) => "marginDense"
      | FullWidth(_) => "fullWidth";
    let to_obj = listOfClasses =>
      listOfClasses
      |> StdLabels.List.fold_left(
           ~f=
             (obj, classType) => {
               switch (classType) {
               | Root(className)
               | MarginNormal(className)
               | MarginDense(className)
               | FullWidth(className) =>
                 Js.Dict.set(obj, to_string(classType), className)
               };
               obj;
             },
           ~init=Js.Dict.empty(),
         );
  };
  [@bs.module "material-ui/Form/FormControl"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~className: string=?,
      ~component: 'union_w=?,
      ~disabled: bool=?,
      ~error: bool=?,
      ~fullWidth: bool=?,
      ~margin: string=?,
      ~onBlur: ReactEventRe.Focus.t => unit=?,
      ~onFocus: ReactEventRe.Focus.t => unit=?,
      ~required: bool=?,
      ~classes: Js.Dict.t(string)=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~className: option(string)=?,
        ~component:
           option([ | `String(string) | `Element(ReasonReact.reactElement)])=?,
        ~disabled: option(bool)=?,
        ~error: option(bool)=?,
        ~fullWidth: option(bool)=?,
        ~margin: option(margin)=?,
        ~onBlur: option(ReactEventRe.Focus.t => unit)=?,
        ~onFocus: option(ReactEventRe.Focus.t => unit)=?,
        ~required: option(bool)=?,
        ~classes: option(Classes.t)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~className?,
          ~component=?Js.Option.map((. v) => unwrapValue(v), component),
          ~disabled?,
          ~error?,
          ~fullWidth?,
          ~margin=?Js.Option.map((. v) => marginToJs(v), margin),
          ~onBlur?,
          ~onFocus?,
          ~required?,
          ~classes=?Js.Option.map((. v) => Classes.to_obj(v), classes),
          ~style?,
          (),
        ),
      children,
    );
};

module FormGroup = {
  module Classes = {
    type classesType =
      | Root(string)
      | Row(string);
    type t = list(classesType);
    let to_string =
      fun
      | Root(_) => "root"
      | Row(_) => "row";
    let to_obj = listOfClasses =>
      listOfClasses
      |> StdLabels.List.fold_left(
           ~f=
             (obj, classType) => {
               switch (classType) {
               | Root(className)
               | Row(className) =>
                 Js.Dict.set(obj, to_string(classType), className)
               };
               obj;
             },
           ~init=Js.Dict.empty(),
         );
  };
  [@bs.module "material-ui/Form/FormGroup"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~className: string=?,
      ~row: bool=?,
      ~classes: Js.Dict.t(string)=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~className: option(string)=?,
        ~row: option(bool)=?,
        ~classes: option(Classes.t)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~className?,
          ~row?,
          ~classes=?Js.Option.map((. v) => Classes.to_obj(v), classes),
          ~style?,
          (),
        ),
      children,
    );
};

module FormHelperText = {
  [@bs.deriving jsConverter]
  type margin = [ | [@bs.as "dense"] `Dense];
  module Classes = {
    type classesType =
      | Root(string)
      | Error(string)
      | Disabled(string)
      | MarginDense(string);
    type t = list(classesType);
    let to_string =
      fun
      | Root(_) => "root"
      | Error(_) => "error"
      | Disabled(_) => "disabled"
      | MarginDense(_) => "marginDense";
    let to_obj = listOfClasses =>
      listOfClasses
      |> StdLabels.List.fold_left(
           ~f=
             (obj, classType) => {
               switch (classType) {
               | Root(className)
               | Error(className)
               | Disabled(className)
               | MarginDense(className) =>
                 Js.Dict.set(obj, to_string(classType), className)
               };
               obj;
             },
           ~init=Js.Dict.empty(),
         );
  };
  [@bs.module "material-ui/Form/FormHelperText"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~className: string=?,
      ~component: 'union_8=?,
      ~disabled: bool=?,
      ~error: bool=?,
      ~margin: string=?,
      ~classes: Js.Dict.t(string)=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~className: option(string)=?,
        ~component:
           option([ | `String(string) | `Element(ReasonReact.reactElement)])=?,
        ~disabled: option(bool)=?,
        ~error: option(bool)=?,
        ~margin: option(margin)=?,
        ~classes: option(Classes.t)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~className?,
          ~component=?Js.Option.map((. v) => unwrapValue(v), component),
          ~disabled?,
          ~error?,
          ~margin=?Js.Option.map((. v) => marginToJs(v), margin),
          ~classes=?Js.Option.map((. v) => Classes.to_obj(v), classes),
          ~style?,
          (),
        ),
      children,
    );
};

module FormLabel = {
  module Classes = {
    type classesType =
      | Root(string)
      | Focused(string)
      | Disabled(string)
      | Error(string)
      | Asterisk(string)
      | AsteriskError(string);
    type t = list(classesType);
    let to_string =
      fun
      | Root(_) => "root"
      | Focused(_) => "focused"
      | Disabled(_) => "disabled"
      | Error(_) => "error"
      | Asterisk(_) => "asterisk"
      | AsteriskError(_) => "asteriskError";
    let to_obj = listOfClasses =>
      listOfClasses
      |> StdLabels.List.fold_left(
           ~f=
             (obj, classType) => {
               switch (classType) {
               | Root(className)
               | Focused(className)
               | Disabled(className)
               | Error(className)
               | Asterisk(className)
               | AsteriskError(className) =>
                 Js.Dict.set(obj, to_string(classType), className)
               };
               obj;
             },
           ~init=Js.Dict.empty(),
         );
  };
  [@bs.module "material-ui/Form/FormLabel"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~className: string=?,
      ~component: 'union_2=?,
      ~disabled: bool=?,
      ~error: bool=?,
      ~focused: bool=?,
      ~required: bool=?,
      ~classes: Js.Dict.t(string)=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~className: option(string)=?,
        ~component:
           option([ | `String(string) | `Element(ReasonReact.reactElement)])=?,
        ~disabled: option(bool)=?,
        ~error: option(bool)=?,
        ~focused: option(bool)=?,
        ~required: option(bool)=?,
        ~classes: option(Classes.t)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~className?,
          ~component=?Js.Option.map((. v) => unwrapValue(v), component),
          ~disabled?,
          ~error?,
          ~focused?,
          ~required?,
          ~classes=?Js.Option.map((. v) => Classes.to_obj(v), classes),
          ~style?,
          (),
        ),
      children,
    );
};

module GridListTileBar = {
  [@bs.deriving jsConverter]
  type actionPosition = [ | [@bs.as "left"] `Left | [@bs.as "right"] `Right];
  [@bs.deriving jsConverter]
  type titlePosition = [ | [@bs.as "top"] `Top | [@bs.as "bottom"] `Bottom];
  module Classes = {
    type classesType =
      | Root(string)
      | TitlePositionBottom(string)
      | TitlePositionTop(string)
      | RootSubtitle(string)
      | TitleWrap(string)
      | TitleWrapActionPosLeft(string)
      | TitleWrapActionPosRight(string)
      | Title(string)
      | Subtitle(string)
      | ActionIcon(string)
      | ActionIconActionPosLeft(string);
    type t = list(classesType);
    let to_string =
      fun
      | Root(_) => "root"
      | TitlePositionBottom(_) => "titlePositionBottom"
      | TitlePositionTop(_) => "titlePositionTop"
      | RootSubtitle(_) => "rootSubtitle"
      | TitleWrap(_) => "titleWrap"
      | TitleWrapActionPosLeft(_) => "titleWrapActionPosLeft"
      | TitleWrapActionPosRight(_) => "titleWrapActionPosRight"
      | Title(_) => "title"
      | Subtitle(_) => "subtitle"
      | ActionIcon(_) => "actionIcon"
      | ActionIconActionPosLeft(_) => "actionIconActionPosLeft";
    let to_obj = listOfClasses =>
      listOfClasses
      |> StdLabels.List.fold_left(
           ~f=
             (obj, classType) => {
               switch (classType) {
               | Root(className)
               | TitlePositionBottom(className)
               | TitlePositionTop(className)
               | RootSubtitle(className)
               | TitleWrap(className)
               | TitleWrapActionPosLeft(className)
               | TitleWrapActionPosRight(className)
               | Title(className)
               | Subtitle(className)
               | ActionIcon(className)
               | ActionIconActionPosLeft(className) =>
                 Js.Dict.set(obj, to_string(classType), className)
               };
               obj;
             },
           ~init=Js.Dict.empty(),
         );
  };
  [@bs.module "material-ui/GridList/GridListTileBar"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~actionIcon: ReasonReact.reactElement=?,
      ~actionPosition: string=?,
      ~className: string=?,
      ~subtitle: ReasonReact.reactElement=?,
      ~title: ReasonReact.reactElement=?,
      ~titlePosition: string=?,
      ~classes: Js.Dict.t(string)=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~actionIcon: option(ReasonReact.reactElement)=?,
        ~actionPosition: option(actionPosition)=?,
        ~className: option(string)=?,
        ~subtitle: option(ReasonReact.reactElement)=?,
        ~title: option(ReasonReact.reactElement)=?,
        ~titlePosition: option(titlePosition)=?,
        ~classes: option(Classes.t)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~actionIcon?,
          ~actionPosition=?
            Js.Option.map((. v) => actionPositionToJs(v), actionPosition),
          ~className?,
          ~subtitle?,
          ~title?,
          ~titlePosition=?
            Js.Option.map((. v) => titlePositionToJs(v), titlePosition),
          ~classes=?Js.Option.map((. v) => Classes.to_obj(v), classes),
          ~style?,
          (),
        ),
      children,
    );
};

module GridListTile = {
  module Classes = {
    type classesType =
      | Root(string)
      | Tile(string)
      | ImgFullHeight(string)
      | ImgFullWidth(string);
    type t = list(classesType);
    let to_string =
      fun
      | Root(_) => "root"
      | Tile(_) => "tile"
      | ImgFullHeight(_) => "imgFullHeight"
      | ImgFullWidth(_) => "imgFullWidth";
    let to_obj = listOfClasses =>
      listOfClasses
      |> StdLabels.List.fold_left(
           ~f=
             (obj, classType) => {
               switch (classType) {
               | Root(className)
               | Tile(className)
               | ImgFullHeight(className)
               | ImgFullWidth(className) =>
                 Js.Dict.set(obj, to_string(classType), className)
               };
               obj;
             },
           ~init=Js.Dict.empty(),
         );
  };
  [@bs.module "material-ui/GridList/GridListTile"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~className: string=?,
      ~cols: 'number_x=?,
      ~component: 'union_w=?,
      ~rows: 'number_p=?,
      ~classes: Js.Dict.t(string)=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~className: option(string)=?,
        ~cols: option([ | `Int(int) | `Float(float)])=?,
        ~component:
           option([ | `String(string) | `Element(ReasonReact.reactElement)])=?,
        ~rows: option([ | `Int(int) | `Float(float)])=?,
        ~classes: option(Classes.t)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~className?,
          ~cols=?Js.Option.map((. v) => unwrapValue(v), cols),
          ~component=?Js.Option.map((. v) => unwrapValue(v), component),
          ~rows=?Js.Option.map((. v) => unwrapValue(v), rows),
          ~classes=?Js.Option.map((. v) => Classes.to_obj(v), classes),
          ~style?,
          (),
        ),
      children,
    );
};

module GridList = {
  [@bs.deriving jsConverter]
  type cellHeight = [ | [@bs.as "auto"] `Auto];
  module Classes = {
    type classesType =
      | Root(string);
    type t = list(classesType);
    let to_string =
      fun
      | Root(_) => "root";
    let to_obj = listOfClasses =>
      listOfClasses
      |> StdLabels.List.fold_left(
           ~f=
             (obj, classType) => {
               switch (classType) {
               | Root(className) =>
                 Js.Dict.set(obj, to_string(classType), className)
               };
               obj;
             },
           ~init=Js.Dict.empty(),
         );
  };
  [@bs.module "material-ui/GridList/GridList"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~cellHeight: 'union_d=?,
      ~className: string=?,
      ~cols: 'number_0=?,
      ~component: 'union_c=?,
      ~spacing: 'number_n=?,
      ~classes: Js.Dict.t(string)=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~cellHeight:
           option([ | `Int(int) | `Float(float) | `Enum(cellHeight)])=?,
        ~className: option(string)=?,
        ~cols: option([ | `Int(int) | `Float(float)])=?,
        ~component:
           option([ | `String(string) | `Element(ReasonReact.reactElement)])=?,
        ~spacing: option([ | `Int(int) | `Float(float)])=?,
        ~classes: option(Classes.t)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~cellHeight=?
            Js.Option.map(
              (. v) =>
                switch (v) {
                | `Enum(v) => unwrapValue(`String(cellHeightToJs(v)))
                | v => unwrapValue(v)
                },
              cellHeight,
            ),
          ~className?,
          ~cols=?Js.Option.map((. v) => unwrapValue(v), cols),
          ~component=?Js.Option.map((. v) => unwrapValue(v), component),
          ~spacing=?Js.Option.map((. v) => unwrapValue(v), spacing),
          ~classes=?Js.Option.map((. v) => Classes.to_obj(v), classes),
          ~style?,
          (),
        ),
      children,
    );
};

module Grid = {
  [@bs.deriving jsConverter]
  type alignContent = [
    | [@bs.as "stretch"] `Stretch
    | [@bs.as "center"] `Center
    | [@bs.as "flex-start"] `Flex_Start
    | [@bs.as "flex-end"] `Flex_End
    | [@bs.as "space-between"] `Space_Between
    | [@bs.as "space-around"] `Space_Around
  ];
  [@bs.deriving jsConverter]
  type alignItems = [
    | [@bs.as "flex-start"] `Flex_Start
    | [@bs.as "center"] `Center
    | [@bs.as "flex-end"] `Flex_End
    | [@bs.as "stretch"] `Stretch
    | [@bs.as "baseline"] `Baseline
  ];
  [@bs.deriving jsConverter]
  type direction = [
    | [@bs.as "row"] `Row
    | [@bs.as "row-reverse"] `Row_Reverse
    | [@bs.as "column"] `Column
    | [@bs.as "column-reverse"] `Column_Reverse
  ];
  [@bs.deriving jsConverter]
  type justify = [
    | [@bs.as "flex-start"] `Flex_Start
    | [@bs.as "center"] `Center
    | [@bs.as "flex-end"] `Flex_End
    | [@bs.as "space-between"] `Space_Between
    | [@bs.as "space-around"] `Space_Around
  ];
  [@bs.deriving jsConverter]
  type lg =
    | [@bs.as 1] True
    | [@bs.as 1] V1
    | [@bs.as 2] V2
    | [@bs.as 3] V3
    | [@bs.as 4] V4
    | [@bs.as 5] V5
    | [@bs.as 6] V6
    | [@bs.as 7] V7
    | [@bs.as 8] V8
    | [@bs.as 9] V9
    | [@bs.as 10] V10
    | [@bs.as 11] V11
    | [@bs.as 12] V12;
  [@bs.deriving jsConverter]
  type md =
    | [@bs.as 1] True
    | [@bs.as 1] V1
    | [@bs.as 2] V2
    | [@bs.as 3] V3
    | [@bs.as 4] V4
    | [@bs.as 5] V5
    | [@bs.as 6] V6
    | [@bs.as 7] V7
    | [@bs.as 8] V8
    | [@bs.as 9] V9
    | [@bs.as 10] V10
    | [@bs.as 11] V11
    | [@bs.as 12] V12;
  [@bs.deriving jsConverter]
  type sm =
    | [@bs.as 1] True
    | [@bs.as 1] V1
    | [@bs.as 2] V2
    | [@bs.as 3] V3
    | [@bs.as 4] V4
    | [@bs.as 5] V5
    | [@bs.as 6] V6
    | [@bs.as 7] V7
    | [@bs.as 8] V8
    | [@bs.as 9] V9
    | [@bs.as 10] V10
    | [@bs.as 11] V11
    | [@bs.as 12] V12;
  [@bs.deriving jsConverter]
  type spacing =
    | [@bs.as 0] V0
    | [@bs.as 8] V8
    | [@bs.as 16] V16
    | [@bs.as 24] V24
    | [@bs.as 40] V40;
  [@bs.deriving jsConverter]
  type wrap = [
    | [@bs.as "nowrap"] `Nowrap
    | [@bs.as "wrap"] `Wrap
    | [@bs.as "wrap-reverse"] `Wrap_Reverse
  ];
  [@bs.deriving jsConverter]
  type xl =
    | [@bs.as 1] True
    | [@bs.as 1] V1
    | [@bs.as 2] V2
    | [@bs.as 3] V3
    | [@bs.as 4] V4
    | [@bs.as 5] V5
    | [@bs.as 6] V6
    | [@bs.as 7] V7
    | [@bs.as 8] V8
    | [@bs.as 9] V9
    | [@bs.as 10] V10
    | [@bs.as 11] V11
    | [@bs.as 12] V12;
  [@bs.deriving jsConverter]
  type xs =
    | [@bs.as 1] True
    | [@bs.as 1] V1
    | [@bs.as 2] V2
    | [@bs.as 3] V3
    | [@bs.as 4] V4
    | [@bs.as 5] V5
    | [@bs.as 6] V6
    | [@bs.as 7] V7
    | [@bs.as 8] V8
    | [@bs.as 9] V9
    | [@bs.as 10] V10
    | [@bs.as 11] V11
    | [@bs.as 12] V12;
  module Classes = {
    type classesType =
      | TypeContainer(string)
      | TypeItem(string)
      | ZeroMinWidth(string)
      | Direction_Xs_Column(string)
      | Direction_Xs_Column_Reverse(string)
      | Direction_Xs_Row_Reverse(string)
      | Wrap_Xs_Nowrap(string)
      | Wrap_Xs_Wrap_Reverse(string)
      | Align_Items_Xs_Center(string)
      | Align_Items_Xs_Flex_Start(string)
      | Align_Items_Xs_Flex_End(string)
      | Align_Items_Xs_Baseline(string)
      | Align_Content_Xs_Center(string)
      | Align_Content_Xs_Flex_Start(string)
      | Align_Content_Xs_Flex_End(string)
      | Align_Content_Xs_Space_Between(string)
      | Align_Content_Xs_Space_Around(string)
      | Justify_Xs_Center(string)
      | Justify_Xs_Flex_End(string)
      | Justify_Xs_Space_Between(string)
      | Justify_Xs_Space_Around(string)
      | Spacing_Xs_8(string)
      | Spacing_Xs_16(string)
      | Spacing_Xs_24(string)
      | Spacing_Xs_40(string)
      | Grid_Xs(string)
      | Grid_Xs_1(string)
      | Grid_Xs_2(string)
      | Grid_Xs_3(string)
      | Grid_Xs_4(string)
      | Grid_Xs_5(string)
      | Grid_Xs_6(string)
      | Grid_Xs_7(string)
      | Grid_Xs_8(string)
      | Grid_Xs_9(string)
      | Grid_Xs_10(string)
      | Grid_Xs_11(string)
      | Grid_Xs_12(string);
    type t = list(classesType);
    let to_string =
      fun
      | TypeContainer(_) => "typeContainer"
      | TypeItem(_) => "typeItem"
      | ZeroMinWidth(_) => "zeroMinWidth"
      | Direction_Xs_Column(_) => "direction-xs-column"
      | Direction_Xs_Column_Reverse(_) => "direction-xs-column-reverse"
      | Direction_Xs_Row_Reverse(_) => "direction-xs-row-reverse"
      | Wrap_Xs_Nowrap(_) => "wrap-xs-nowrap"
      | Wrap_Xs_Wrap_Reverse(_) => "wrap-xs-wrap-reverse"
      | Align_Items_Xs_Center(_) => "align-items-xs-center"
      | Align_Items_Xs_Flex_Start(_) => "align-items-xs-flex-start"
      | Align_Items_Xs_Flex_End(_) => "align-items-xs-flex-end"
      | Align_Items_Xs_Baseline(_) => "align-items-xs-baseline"
      | Align_Content_Xs_Center(_) => "align-content-xs-center"
      | Align_Content_Xs_Flex_Start(_) => "align-content-xs-flex-start"
      | Align_Content_Xs_Flex_End(_) => "align-content-xs-flex-end"
      | Align_Content_Xs_Space_Between(_) => "align-content-xs-space-between"
      | Align_Content_Xs_Space_Around(_) => "align-content-xs-space-around"
      | Justify_Xs_Center(_) => "justify-xs-center"
      | Justify_Xs_Flex_End(_) => "justify-xs-flex-end"
      | Justify_Xs_Space_Between(_) => "justify-xs-space-between"
      | Justify_Xs_Space_Around(_) => "justify-xs-space-around"
      | Spacing_Xs_8(_) => "spacing-xs-8"
      | Spacing_Xs_16(_) => "spacing-xs-16"
      | Spacing_Xs_24(_) => "spacing-xs-24"
      | Spacing_Xs_40(_) => "spacing-xs-40"
      | Grid_Xs(_) => "grid-xs"
      | Grid_Xs_1(_) => "grid-xs-1"
      | Grid_Xs_2(_) => "grid-xs-2"
      | Grid_Xs_3(_) => "grid-xs-3"
      | Grid_Xs_4(_) => "grid-xs-4"
      | Grid_Xs_5(_) => "grid-xs-5"
      | Grid_Xs_6(_) => "grid-xs-6"
      | Grid_Xs_7(_) => "grid-xs-7"
      | Grid_Xs_8(_) => "grid-xs-8"
      | Grid_Xs_9(_) => "grid-xs-9"
      | Grid_Xs_10(_) => "grid-xs-10"
      | Grid_Xs_11(_) => "grid-xs-11"
      | Grid_Xs_12(_) => "grid-xs-12";
    let to_obj = listOfClasses =>
      listOfClasses
      |> StdLabels.List.fold_left(
           ~f=
             (obj, classType) => {
               switch (classType) {
               | TypeContainer(className)
               | TypeItem(className)
               | ZeroMinWidth(className)
               | Direction_Xs_Column(className)
               | Direction_Xs_Column_Reverse(className)
               | Direction_Xs_Row_Reverse(className)
               | Wrap_Xs_Nowrap(className)
               | Wrap_Xs_Wrap_Reverse(className)
               | Align_Items_Xs_Center(className)
               | Align_Items_Xs_Flex_Start(className)
               | Align_Items_Xs_Flex_End(className)
               | Align_Items_Xs_Baseline(className)
               | Align_Content_Xs_Center(className)
               | Align_Content_Xs_Flex_Start(className)
               | Align_Content_Xs_Flex_End(className)
               | Align_Content_Xs_Space_Between(className)
               | Align_Content_Xs_Space_Around(className)
               | Justify_Xs_Center(className)
               | Justify_Xs_Flex_End(className)
               | Justify_Xs_Space_Between(className)
               | Justify_Xs_Space_Around(className)
               | Spacing_Xs_8(className)
               | Spacing_Xs_16(className)
               | Spacing_Xs_24(className)
               | Spacing_Xs_40(className)
               | Grid_Xs(className)
               | Grid_Xs_1(className)
               | Grid_Xs_2(className)
               | Grid_Xs_3(className)
               | Grid_Xs_4(className)
               | Grid_Xs_5(className)
               | Grid_Xs_6(className)
               | Grid_Xs_7(className)
               | Grid_Xs_8(className)
               | Grid_Xs_9(className)
               | Grid_Xs_10(className)
               | Grid_Xs_11(className)
               | Grid_Xs_12(className) =>
                 Js.Dict.set(obj, to_string(classType), className)
               };
               obj;
             },
           ~init=Js.Dict.empty(),
         );
  };
  [@bs.module "material-ui/Grid/Grid"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~alignContent: string=?,
      ~alignItems: string=?,
      ~className: string=?,
      ~component: 'union_o=?,
      ~container: bool=?,
      ~direction: string=?,
      ~hidden: Js.t({..})=?,
      ~item: bool=?,
      ~justify: string=?,
      ~lg: int=?,
      ~md: int=?,
      ~sm: int=?,
      ~spacing: int=?,
      ~wrap: string=?,
      ~xl: int=?,
      ~xs: int=?,
      ~zeroMinWidth: bool=?,
      ~classes: Js.Dict.t(string)=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~alignContent: option(alignContent)=?,
        ~alignItems: option(alignItems)=?,
        ~className: option(string)=?,
        ~component:
           option([ | `String(string) | `Element(ReasonReact.reactElement)])=?,
        ~container: option(bool)=?,
        ~direction: option(direction)=?,
        ~hidden: option(Js.t({..}))=?,
        ~item: option(bool)=?,
        ~justify: option(justify)=?,
        ~lg: option(lg)=?,
        ~md: option(md)=?,
        ~sm: option(sm)=?,
        ~spacing: option(spacing)=?,
        ~wrap: option(wrap)=?,
        ~xl: option(xl)=?,
        ~xs: option(xs)=?,
        ~zeroMinWidth: option(bool)=?,
        ~classes: option(Classes.t)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~alignContent=?
            Js.Option.map((. v) => alignContentToJs(v), alignContent),
          ~alignItems=?
            Js.Option.map((. v) => alignItemsToJs(v), alignItems),
          ~className?,
          ~component=?Js.Option.map((. v) => unwrapValue(v), component),
          ~container?,
          ~direction=?Js.Option.map((. v) => directionToJs(v), direction),
          ~hidden?,
          ~item?,
          ~justify=?Js.Option.map((. v) => justifyToJs(v), justify),
          ~lg=?Js.Option.map((. v) => lgToJs(v), lg),
          ~md=?Js.Option.map((. v) => mdToJs(v), md),
          ~sm=?Js.Option.map((. v) => smToJs(v), sm),
          ~spacing=?Js.Option.map((. v) => spacingToJs(v), spacing),
          ~wrap=?Js.Option.map((. v) => wrapToJs(v), wrap),
          ~xl=?Js.Option.map((. v) => xlToJs(v), xl),
          ~xs=?Js.Option.map((. v) => xsToJs(v), xs),
          ~zeroMinWidth?,
          ~classes=?Js.Option.map((. v) => Classes.to_obj(v), classes),
          ~style?,
          (),
        ),
      children,
    );
};

module Grow = {
  [@bs.deriving jsConverter]
  type timeoutShape = {
    enter: int,
    exit: int,
  };
  [@bs.deriving jsConverter]
  type timeout = [ | [@bs.as "auto"] `Auto];
  [@bs.module "material-ui/transitions/Grow"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~_in: bool=?,
      ~onEnter: unit => unit=?,
      ~onExit: unit => unit=?,
      ~theme: Js.t({..}),
      ~timeout: 'union_1=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~_in: option(bool)=?,
        ~onEnter: option(unit => unit)=?,
        ~onExit: option(unit => unit)=?,
        ~theme: Js.t({..}),
        ~timeout:
           option(
             [
               | `Int(int)
               | `Float(float)
               | `Object(timeoutShape)
               | `Enum(timeout)
             ],
           )=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~_in?,
          ~onEnter?,
          ~onExit?,
          ~theme,
          ~timeout=?
            Js.Option.map(
              (. v) =>
                switch (v) {
                | `Enum(v) => unwrapValue(`String(timeoutToJs(v)))
                | `Object(v) => unwrapValue(`Element(timeoutShapeToJs(v)))
                | v => unwrapValue(v)
                },
              timeout,
            ),
          ~style?,
          (),
        ),
      children,
    );
};

module Hidden = {
  [@bs.deriving jsConverter]
  type implementation = [ | [@bs.as "js"] `Js | [@bs.as "css"] `Css];
  [@bs.deriving jsConverter]
  type initialWidth = [
    | [@bs.as "xs"] `Xs
    | [@bs.as "sm"] `Sm
    | [@bs.as "md"] `Md
    | [@bs.as "lg"] `Lg
    | [@bs.as "xl"] `Xl
  ];
  [@bs.deriving jsConverter]
  type only = [
    | [@bs.as "xs"] `Xs
    | [@bs.as "sm"] `Sm
    | [@bs.as "md"] `Md
    | [@bs.as "lg"] `Lg
    | [@bs.as "xl"] `Xl
  ];
  [@bs.module "material-ui/Hidden/Hidden"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~className: string=?,
      ~implementation: string=?,
      ~initialWidth: string=?,
      ~lgDown: bool=?,
      ~lgUp: bool=?,
      ~mdDown: bool=?,
      ~mdUp: bool=?,
      ~only: 'union_6=?,
      ~smDown: bool=?,
      ~smUp: bool=?,
      ~xlDown: bool=?,
      ~xlUp: bool=?,
      ~xsDown: bool=?,
      ~xsUp: bool=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~className: option(string)=?,
        ~implementation: option(implementation)=?,
        ~initialWidth: option(initialWidth)=?,
        ~lgDown: option(bool)=?,
        ~lgUp: option(bool)=?,
        ~mdDown: option(bool)=?,
        ~mdUp: option(bool)=?,
        ~only: option([ | `Enum(only) | `EnumArray(array(only))])=?,
        ~smDown: option(bool)=?,
        ~smUp: option(bool)=?,
        ~xlDown: option(bool)=?,
        ~xlUp: option(bool)=?,
        ~xsDown: option(bool)=?,
        ~xsUp: option(bool)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~className?,
          ~implementation=?
            Js.Option.map((. v) => implementationToJs(v), implementation),
          ~initialWidth=?
            Js.Option.map((. v) => initialWidthToJs(v), initialWidth),
          ~lgDown?,
          ~lgUp?,
          ~mdDown?,
          ~mdUp?,
          ~only=?
            Js.Option.map(
              (. v) =>
                switch (v) {
                | `Enum(v) => unwrapValue(`String(onlyToJs(v)))
                | `EnumArray(v) =>
                  unwrapValue(`Element(Array.map(onlyToJs, v)))
                },
              only,
            ),
          ~smDown?,
          ~smUp?,
          ~xlDown?,
          ~xlUp?,
          ~xsDown?,
          ~xsUp?,
          ~style?,
          (),
        ),
      children,
    );
};

module IconButton = {
  [@bs.deriving jsConverter]
  type color = [
    | [@bs.as "default"] `Default
    | [@bs.as "inherit"] `Inherit
    | [@bs.as "primary"] `Primary
    | [@bs.as "secondary"] `Secondary
  ];
  module Classes = {
    type classesType =
      | Root(string)
      | ColorInherit(string)
      | ColorPrimary(string)
      | ColorSecondary(string)
      | Disabled(string)
      | Label(string);
    type t = list(classesType);
    let to_string =
      fun
      | Root(_) => "root"
      | ColorInherit(_) => "colorInherit"
      | ColorPrimary(_) => "colorPrimary"
      | ColorSecondary(_) => "colorSecondary"
      | Disabled(_) => "disabled"
      | Label(_) => "label";
    let to_obj = listOfClasses =>
      listOfClasses
      |> StdLabels.List.fold_left(
           ~f=
             (obj, classType) => {
               switch (classType) {
               | Root(className)
               | ColorInherit(className)
               | ColorPrimary(className)
               | ColorSecondary(className)
               | Disabled(className)
               | Label(className) =>
                 Js.Dict.set(obj, to_string(classType), className)
               };
               obj;
             },
           ~init=Js.Dict.empty(),
         );
  };
  [@bs.module "material-ui/IconButton/IconButton"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~className: string=?,
      ~color: string=?,
      ~disabled: bool=?,
      ~disableRipple: bool=?,
      ~buttonRef: ReasonReact.reactElement=?,
      ~centerRipple: bool=?,
      ~component: 'union_0=?,
      ~focusRipple: bool=?,
      ~onBlur: ReactEventRe.Focus.t => unit=?,
      ~onClick: ReactEventRe.Mouse.t => unit=?,
      ~onFocus: ReactEventRe.Focus.t => unit=?,
      ~onKeyboardFocus: ReactEventRe.Focus.t => unit=?,
      ~onKeyDown: ReactEventRe.Keyboard.t => unit=?,
      ~onKeyUp: ReactEventRe.Keyboard.t => unit=?,
      ~onMouseDown: ReactEventRe.Mouse.t => unit=?,
      ~onMouseLeave: ReactEventRe.Mouse.t => unit=?,
      ~onMouseUp: ReactEventRe.Mouse.t => unit=?,
      ~onTouchEnd: ReactEventRe.Touch.t => unit=?,
      ~onTouchMove: ReactEventRe.Touch.t => unit=?,
      ~onTouchStart: ReactEventRe.Touch.t => unit=?,
      ~role: string=?,
      ~tabIndex: 'union_o=?,
      ~_TouchRippleProps: Js.t({..})=?,
      ~_type: string=?,
      ~classes: Js.Dict.t(string)=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~className: option(string)=?,
        ~color: option(color)=?,
        ~disabled: option(bool)=?,
        ~disableRipple: option(bool)=?,
        ~buttonRef: option(ReasonReact.reactElement)=?,
        ~centerRipple: option(bool)=?,
        ~component:
           option([ | `String(string) | `Element(ReasonReact.reactElement)])=?,
        ~focusRipple: option(bool)=?,
        ~onBlur: option(ReactEventRe.Focus.t => unit)=?,
        ~onClick: option(ReactEventRe.Mouse.t => unit)=?,
        ~onFocus: option(ReactEventRe.Focus.t => unit)=?,
        ~onKeyboardFocus: option(ReactEventRe.Focus.t => unit)=?,
        ~onKeyDown: option(ReactEventRe.Keyboard.t => unit)=?,
        ~onKeyUp: option(ReactEventRe.Keyboard.t => unit)=?,
        ~onMouseDown: option(ReactEventRe.Mouse.t => unit)=?,
        ~onMouseLeave: option(ReactEventRe.Mouse.t => unit)=?,
        ~onMouseUp: option(ReactEventRe.Mouse.t => unit)=?,
        ~onTouchEnd: option(ReactEventRe.Touch.t => unit)=?,
        ~onTouchMove: option(ReactEventRe.Touch.t => unit)=?,
        ~onTouchStart: option(ReactEventRe.Touch.t => unit)=?,
        ~role: option(string)=?,
        ~tabIndex: option([ | `Int(int) | `Float(float) | `String(string)])=?,
        ~_TouchRippleProps: option(Js.t({..}))=?,
        ~_type: option(string)=?,
        ~classes: option(Classes.t)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~className?,
          ~color=?Js.Option.map((. v) => colorToJs(v), color),
          ~disabled?,
          ~disableRipple?,
          ~buttonRef?,
          ~centerRipple?,
          ~component=?Js.Option.map((. v) => unwrapValue(v), component),
          ~focusRipple?,
          ~onBlur?,
          ~onClick?,
          ~onFocus?,
          ~onKeyboardFocus?,
          ~onKeyDown?,
          ~onKeyUp?,
          ~onMouseDown?,
          ~onMouseLeave?,
          ~onMouseUp?,
          ~onTouchEnd?,
          ~onTouchMove?,
          ~onTouchStart?,
          ~role?,
          ~tabIndex=?Js.Option.map((. v) => unwrapValue(v), tabIndex),
          ~_TouchRippleProps?,
          ~_type?,
          ~classes=?Js.Option.map((. v) => Classes.to_obj(v), classes),
          ~style?,
          (),
        ),
      children,
    );
};

module Icon = {
  [@bs.deriving jsConverter]
  type color = [
    | [@bs.as "inherit"] `Inherit
    | [@bs.as "secondary"] `Secondary
    | [@bs.as "action"] `Action
    | [@bs.as "disabled"] `Disabled
    | [@bs.as "error"] `Error
    | [@bs.as "primary"] `Primary
  ];
  module Classes = {
    type classesType =
      | Root(string)
      | ColorPrimary(string)
      | ColorSecondary(string)
      | ColorAction(string)
      | ColorDisabled(string)
      | ColorError(string);
    type t = list(classesType);
    let to_string =
      fun
      | Root(_) => "root"
      | ColorPrimary(_) => "colorPrimary"
      | ColorSecondary(_) => "colorSecondary"
      | ColorAction(_) => "colorAction"
      | ColorDisabled(_) => "colorDisabled"
      | ColorError(_) => "colorError";
    let to_obj = listOfClasses =>
      listOfClasses
      |> StdLabels.List.fold_left(
           ~f=
             (obj, classType) => {
               switch (classType) {
               | Root(className)
               | ColorPrimary(className)
               | ColorSecondary(className)
               | ColorAction(className)
               | ColorDisabled(className)
               | ColorError(className) =>
                 Js.Dict.set(obj, to_string(classType), className)
               };
               obj;
             },
           ~init=Js.Dict.empty(),
         );
  };
  [@bs.module "material-ui/Icon/Icon"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~className: string=?,
      ~color: string=?,
      ~classes: Js.Dict.t(string)=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~className: option(string)=?,
        ~color: option(color)=?,
        ~classes: option(Classes.t)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~className?,
          ~color=?Js.Option.map((. v) => colorToJs(v), color),
          ~classes=?Js.Option.map((. v) => Classes.to_obj(v), classes),
          ~style?,
          (),
        ),
      children,
    );
};

module InputAdornment = {
  [@bs.deriving jsConverter]
  type position = [ | [@bs.as "start"] `Start | [@bs.as "end"] `End];
  module Classes = {
    type classesType =
      | Root(string)
      | PositionStart(string)
      | PositionEnd(string);
    type t = list(classesType);
    let to_string =
      fun
      | Root(_) => "root"
      | PositionStart(_) => "positionStart"
      | PositionEnd(_) => "positionEnd";
    let to_obj = listOfClasses =>
      listOfClasses
      |> StdLabels.List.fold_left(
           ~f=
             (obj, classType) => {
               switch (classType) {
               | Root(className)
               | PositionStart(className)
               | PositionEnd(className) =>
                 Js.Dict.set(obj, to_string(classType), className)
               };
               obj;
             },
           ~init=Js.Dict.empty(),
         );
  };
  [@bs.module "material-ui/Input/InputAdornment"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~className: string=?,
      ~component: 'union_o=?,
      ~disableTypography: bool=?,
      ~position: string=?,
      ~classes: Js.Dict.t(string)=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~className: option(string)=?,
        ~component:
           option([ | `String(string) | `Element(ReasonReact.reactElement)])=?,
        ~disableTypography: option(bool)=?,
        ~position: option(position)=?,
        ~classes: option(Classes.t)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~className?,
          ~component=?Js.Option.map((. v) => unwrapValue(v), component),
          ~disableTypography?,
          ~position=?Js.Option.map((. v) => positionToJs(v), position),
          ~classes=?Js.Option.map((. v) => Classes.to_obj(v), classes),
          ~style?,
          (),
        ),
      children,
    );
};

module InputLabel = {
  [@bs.deriving jsConverter]
  type margin = [ | [@bs.as "dense"] `Dense];
  module Classes = {
    type classesType =
      | Root(string)
      | FormControl(string)
      | MarginDense(string)
      | Shrink(string)
      | Animated(string);
    type t = list(classesType);
    let to_string =
      fun
      | Root(_) => "root"
      | FormControl(_) => "formControl"
      | MarginDense(_) => "marginDense"
      | Shrink(_) => "shrink"
      | Animated(_) => "animated";
    let to_obj = listOfClasses =>
      listOfClasses
      |> StdLabels.List.fold_left(
           ~f=
             (obj, classType) => {
               switch (classType) {
               | Root(className)
               | FormControl(className)
               | MarginDense(className)
               | Shrink(className)
               | Animated(className) =>
                 Js.Dict.set(obj, to_string(classType), className)
               };
               obj;
             },
           ~init=Js.Dict.empty(),
         );
  };
  [@bs.module "material-ui/Input/InputLabel"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~className: string=?,
      ~disableAnimation: bool=?,
      ~disabled: bool=?,
      ~error: bool=?,
      ~focused: bool=?,
      ~_FormLabelClasses: Js.t({..})=?,
      ~margin: string=?,
      ~required: bool=?,
      ~shrink: bool=?,
      ~component: 'union_2=?,
      ~classes: Js.Dict.t(string)=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~className: option(string)=?,
        ~disableAnimation: option(bool)=?,
        ~disabled: option(bool)=?,
        ~error: option(bool)=?,
        ~focused: option(bool)=?,
        ~_FormLabelClasses: option(Js.t({..}))=?,
        ~margin: option(margin)=?,
        ~required: option(bool)=?,
        ~shrink: option(bool)=?,
        ~component:
           option([ | `String(string) | `Element(ReasonReact.reactElement)])=?,
        ~classes: option(Classes.t)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~className?,
          ~disableAnimation?,
          ~disabled?,
          ~error?,
          ~focused?,
          ~_FormLabelClasses?,
          ~margin=?Js.Option.map((. v) => marginToJs(v), margin),
          ~required?,
          ~shrink?,
          ~component=?Js.Option.map((. v) => unwrapValue(v), component),
          ~classes=?Js.Option.map((. v) => Classes.to_obj(v), classes),
          ~style?,
          (),
        ),
      children,
    );
};

module Input = {
  [@bs.deriving jsConverter]
  type margin = [ | [@bs.as "dense"] `Dense | [@bs.as "none"] `None];
  module Classes = {
    type classesType =
      | Root(string)
      | FormControl(string)
      | Focused(string)
      | Disabled(string)
      | Underline(string)
      | Error(string)
      | Multiline(string)
      | FullWidth(string)
      | Input(string)
      | InputMarginDense(string)
      | InputDisabled(string)
      | InputMultiline(string)
      | InputType(string)
      | InputTypeSearch(string);
    type t = list(classesType);
    let to_string =
      fun
      | Root(_) => "root"
      | FormControl(_) => "formControl"
      | Focused(_) => "focused"
      | Disabled(_) => "disabled"
      | Underline(_) => "underline"
      | Error(_) => "error"
      | Multiline(_) => "multiline"
      | FullWidth(_) => "fullWidth"
      | Input(_) => "input"
      | InputMarginDense(_) => "inputMarginDense"
      | InputDisabled(_) => "inputDisabled"
      | InputMultiline(_) => "inputMultiline"
      | InputType(_) => "inputType"
      | InputTypeSearch(_) => "inputTypeSearch";
    let to_obj = listOfClasses =>
      listOfClasses
      |> StdLabels.List.fold_left(
           ~f=
             (obj, classType) => {
               switch (classType) {
               | Root(className)
               | FormControl(className)
               | Focused(className)
               | Disabled(className)
               | Underline(className)
               | Error(className)
               | Multiline(className)
               | FullWidth(className)
               | Input(className)
               | InputMarginDense(className)
               | InputDisabled(className)
               | InputMultiline(className)
               | InputType(className)
               | InputTypeSearch(className) =>
                 Js.Dict.set(obj, to_string(classType), className)
               };
               obj;
             },
           ~init=Js.Dict.empty(),
         );
  };
  [@bs.module "material-ui/Input/Input"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~autoComplete: string=?,
      ~autoFocus: bool=?,
      ~className: string=?,
      ~defaultValue: 'union_i=?,
      ~disabled: bool=?,
      ~disableUnderline: bool=?,
      ~endAdornment: ReasonReact.reactElement=?,
      ~error: bool=?,
      ~fullWidth: bool=?,
      ~id: string=?,
      ~inputComponent: 'any_r=?,
      ~inputProps: Js.t({..})=?,
      ~inputRef: ReasonReact.reactElement=?,
      ~margin: string=?,
      ~multiline: bool=?,
      ~name: string=?,
      ~onBlur: ReactEventRe.Focus.t => unit=?,
      ~onChange: ReactEventRe.Form.t => unit=?,
      ~onEmpty: ReactEventRe.Synthetic.t => unit=?,
      ~onFilled: ReactEventRe.Synthetic.t => unit=?,
      ~onFocus: ReactEventRe.Focus.t => unit=?,
      ~onKeyDown: ReactEventRe.Keyboard.t => unit=?,
      ~onKeyUp: ReactEventRe.Keyboard.t => unit=?,
      ~placeholder: string=?,
      ~readOnly: bool=?,
      ~rows: 'union_l=?,
      ~rowsMax: 'union_2=?,
      ~startAdornment: ReasonReact.reactElement=?,
      ~_type: string=?,
      ~value: 'union_x=?,
      ~classes: Js.Dict.t(string)=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~autoComplete: option(string)=?,
        ~autoFocus: option(bool)=?,
        ~className: option(string)=?,
        ~defaultValue:
           option([ | `String(string) | `Int(int) | `Float(float)])=?,
        ~disabled: option(bool)=?,
        ~disableUnderline: option(bool)=?,
        ~endAdornment: option(ReasonReact.reactElement)=?,
        ~error: option(bool)=?,
        ~fullWidth: option(bool)=?,
        ~id: option(string)=?,
        ~inputComponent: option('any_r)=?,
        ~inputProps: option(Js.t({..}))=?,
        ~inputRef: option(ReasonReact.reactElement)=?,
        ~margin: option(margin)=?,
        ~multiline: option(bool)=?,
        ~name: option(string)=?,
        ~onBlur: option(ReactEventRe.Focus.t => unit)=?,
        ~onChange: option(ReactEventRe.Form.t => unit)=?,
        ~onEmpty: option(ReactEventRe.Synthetic.t => unit)=?,
        ~onFilled: option(ReactEventRe.Synthetic.t => unit)=?,
        ~onFocus: option(ReactEventRe.Focus.t => unit)=?,
        ~onKeyDown: option(ReactEventRe.Keyboard.t => unit)=?,
        ~onKeyUp: option(ReactEventRe.Keyboard.t => unit)=?,
        ~placeholder: option(string)=?,
        ~readOnly: option(bool)=?,
        ~rows: option([ | `String(string) | `Int(int) | `Float(float)])=?,
        ~rowsMax: option([ | `String(string) | `Int(int) | `Float(float)])=?,
        ~startAdornment: option(ReasonReact.reactElement)=?,
        ~_type: option(string)=?,
        ~value:
           option(
             [
               | `String(string)
               | `Int(int)
               | `Float(float)
               | `StringArray(array(string))
               | `IntArray(array(int))
               | `FloatArray(array(float))
             ],
           )=?,
        ~classes: option(Classes.t)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~autoComplete?,
          ~autoFocus?,
          ~className?,
          ~defaultValue=?
            Js.Option.map((. v) => unwrapValue(v), defaultValue),
          ~disabled?,
          ~disableUnderline?,
          ~endAdornment?,
          ~error?,
          ~fullWidth?,
          ~id?,
          ~inputComponent?,
          ~inputProps?,
          ~inputRef?,
          ~margin=?Js.Option.map((. v) => marginToJs(v), margin),
          ~multiline?,
          ~name?,
          ~onBlur?,
          ~onChange?,
          ~onEmpty?,
          ~onFilled?,
          ~onFocus?,
          ~onKeyDown?,
          ~onKeyUp?,
          ~placeholder?,
          ~readOnly?,
          ~rows=?Js.Option.map((. v) => unwrapValue(v), rows),
          ~rowsMax=?Js.Option.map((. v) => unwrapValue(v), rowsMax),
          ~startAdornment?,
          ~_type?,
          ~value=?Js.Option.map((. v) => unwrapValue(v), value),
          ~classes=?Js.Option.map((. v) => Classes.to_obj(v), classes),
          ~style?,
          (),
        ),
      children,
    );
};

module LinearProgress = {
  [@bs.deriving jsConverter]
  type color = [
    | [@bs.as "primary"] `Primary
    | [@bs.as "secondary"] `Secondary
  ];
  [@bs.deriving jsConverter]
  type variant = [
    | [@bs.as "determinate"] `Determinate
    | [@bs.as "indeterminate"] `Indeterminate
    | [@bs.as "buffer"] `Buffer
    | [@bs.as "query"] `Query
  ];
  module Classes = {
    type classesType =
      | Root(string)
      | ColorPrimary(string)
      | ColorSecondary(string)
      | Buffer(string)
      | Query(string)
      | Dashed(string)
      | DashedColorPrimary(string)
      | DashedColorSecondary(string)
      | Bar(string)
      | BarColorPrimary(string)
      | BarColorSecondary(string)
      | Bar1Indeterminate(string)
      | Bar2Indeterminate(string)
      | Bar1Determinate(string)
      | Bar1Buffer(string)
      | Bar2Buffer(string);
    type t = list(classesType);
    let to_string =
      fun
      | Root(_) => "root"
      | ColorPrimary(_) => "colorPrimary"
      | ColorSecondary(_) => "colorSecondary"
      | Buffer(_) => "buffer"
      | Query(_) => "query"
      | Dashed(_) => "dashed"
      | DashedColorPrimary(_) => "dashedColorPrimary"
      | DashedColorSecondary(_) => "dashedColorSecondary"
      | Bar(_) => "bar"
      | BarColorPrimary(_) => "barColorPrimary"
      | BarColorSecondary(_) => "barColorSecondary"
      | Bar1Indeterminate(_) => "bar1Indeterminate"
      | Bar2Indeterminate(_) => "bar2Indeterminate"
      | Bar1Determinate(_) => "bar1Determinate"
      | Bar1Buffer(_) => "bar1Buffer"
      | Bar2Buffer(_) => "bar2Buffer";
    let to_obj = listOfClasses =>
      listOfClasses
      |> StdLabels.List.fold_left(
           ~f=
             (obj, classType) => {
               switch (classType) {
               | Root(className)
               | ColorPrimary(className)
               | ColorSecondary(className)
               | Buffer(className)
               | Query(className)
               | Dashed(className)
               | DashedColorPrimary(className)
               | DashedColorSecondary(className)
               | Bar(className)
               | BarColorPrimary(className)
               | BarColorSecondary(className)
               | Bar1Indeterminate(className)
               | Bar2Indeterminate(className)
               | Bar1Determinate(className)
               | Bar1Buffer(className)
               | Bar2Buffer(className) =>
                 Js.Dict.set(obj, to_string(classType), className)
               };
               obj;
             },
           ~init=Js.Dict.empty(),
         );
  };
  [@bs.module "material-ui/Progress/LinearProgress"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~className: string=?,
      ~color: string=?,
      ~value: 'number_1=?,
      ~valueBuffer: 'number_u=?,
      ~variant: string=?,
      ~classes: Js.Dict.t(string)=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~className: option(string)=?,
        ~color: option(color)=?,
        ~value: option([ | `Int(int) | `Float(float)])=?,
        ~valueBuffer: option([ | `Int(int) | `Float(float)])=?,
        ~variant: option(variant)=?,
        ~classes: option(Classes.t)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~className?,
          ~color=?Js.Option.map((. v) => colorToJs(v), color),
          ~value=?Js.Option.map((. v) => unwrapValue(v), value),
          ~valueBuffer=?Js.Option.map((. v) => unwrapValue(v), valueBuffer),
          ~variant=?Js.Option.map((. v) => variantToJs(v), variant),
          ~classes=?Js.Option.map((. v) => Classes.to_obj(v), classes),
          ~style?,
          (),
        ),
      children,
    );
};

module ListItemAvatar = {
  module Classes = {
    type classesType =
      | Root(string)
      | Icon(string);
    type t = list(classesType);
    let to_string =
      fun
      | Root(_) => "root"
      | Icon(_) => "icon";
    let to_obj = listOfClasses =>
      listOfClasses
      |> StdLabels.List.fold_left(
           ~f=
             (obj, classType) => {
               switch (classType) {
               | Root(className)
               | Icon(className) =>
                 Js.Dict.set(obj, to_string(classType), className)
               };
               obj;
             },
           ~init=Js.Dict.empty(),
         );
  };
  [@bs.module "material-ui/List/ListItemAvatar"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~className: string=?,
      ~classes: Js.Dict.t(string)=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~className: option(string)=?,
        ~classes: option(Classes.t)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~className?,
          ~classes=?Js.Option.map((. v) => Classes.to_obj(v), classes),
          ~style?,
          (),
        ),
      children,
    );
};

module ListItemIcon = {
  module Classes = {
    type classesType =
      | Root(string);
    type t = list(classesType);
    let to_string =
      fun
      | Root(_) => "root";
    let to_obj = listOfClasses =>
      listOfClasses
      |> StdLabels.List.fold_left(
           ~f=
             (obj, classType) => {
               switch (classType) {
               | Root(className) =>
                 Js.Dict.set(obj, to_string(classType), className)
               };
               obj;
             },
           ~init=Js.Dict.empty(),
         );
  };
  [@bs.module "material-ui/List/ListItemIcon"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~className: string=?,
      ~classes: Js.Dict.t(string)=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~className: option(string)=?,
        ~classes: option(Classes.t)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~className?,
          ~classes=?Js.Option.map((. v) => Classes.to_obj(v), classes),
          ~style?,
          (),
        ),
      children,
    );
};

module ListItemSecondaryAction = {
  module Classes = {
    type classesType =
      | Root(string);
    type t = list(classesType);
    let to_string =
      fun
      | Root(_) => "root";
    let to_obj = listOfClasses =>
      listOfClasses
      |> StdLabels.List.fold_left(
           ~f=
             (obj, classType) => {
               switch (classType) {
               | Root(className) =>
                 Js.Dict.set(obj, to_string(classType), className)
               };
               obj;
             },
           ~init=Js.Dict.empty(),
         );
  };
  [@bs.module "material-ui/List/ListItemSecondaryAction"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~className: string=?,
      ~classes: Js.Dict.t(string)=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~className: option(string)=?,
        ~classes: option(Classes.t)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~className?,
          ~classes=?Js.Option.map((. v) => Classes.to_obj(v), classes),
          ~style?,
          (),
        ),
      children,
    );
};

module ListItemText = {
  module Classes = {
    type classesType =
      | Root(string)
      | Inset(string)
      | Dense(string)
      | Primary(string)
      | Secondary(string)
      | TextDense(string);
    type t = list(classesType);
    let to_string =
      fun
      | Root(_) => "root"
      | Inset(_) => "inset"
      | Dense(_) => "dense"
      | Primary(_) => "primary"
      | Secondary(_) => "secondary"
      | TextDense(_) => "textDense";
    let to_obj = listOfClasses =>
      listOfClasses
      |> StdLabels.List.fold_left(
           ~f=
             (obj, classType) => {
               switch (classType) {
               | Root(className)
               | Inset(className)
               | Dense(className)
               | Primary(className)
               | Secondary(className)
               | TextDense(className) =>
                 Js.Dict.set(obj, to_string(classType), className)
               };
               obj;
             },
           ~init=Js.Dict.empty(),
         );
  };
  [@bs.module "material-ui/List/ListItemText"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~className: string=?,
      ~disableTypography: bool=?,
      ~inset: bool=?,
      ~primary: ReasonReact.reactElement=?,
      ~secondary: ReasonReact.reactElement=?,
      ~classes: Js.Dict.t(string)=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~className: option(string)=?,
        ~disableTypography: option(bool)=?,
        ~inset: option(bool)=?,
        ~primary: option(ReasonReact.reactElement)=?,
        ~secondary: option(ReasonReact.reactElement)=?,
        ~classes: option(Classes.t)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~className?,
          ~disableTypography?,
          ~inset?,
          ~primary?,
          ~secondary?,
          ~classes=?Js.Option.map((. v) => Classes.to_obj(v), classes),
          ~style?,
          (),
        ),
      children,
    );
};

module ListItem = {
  module Classes = {
    type classesType =
      | Root(string)
      | Container(string)
      | KeyboardFocused(string)
      | Default(string)
      | Dense(string)
      | Disabled(string)
      | Divider(string)
      | Gutters(string)
      | Button(string)
      | SecondaryAction(string);
    type t = list(classesType);
    let to_string =
      fun
      | Root(_) => "root"
      | Container(_) => "container"
      | KeyboardFocused(_) => "keyboardFocused"
      | Default(_) => "default"
      | Dense(_) => "dense"
      | Disabled(_) => "disabled"
      | Divider(_) => "divider"
      | Gutters(_) => "gutters"
      | Button(_) => "button"
      | SecondaryAction(_) => "secondaryAction";
    let to_obj = listOfClasses =>
      listOfClasses
      |> StdLabels.List.fold_left(
           ~f=
             (obj, classType) => {
               switch (classType) {
               | Root(className)
               | Container(className)
               | KeyboardFocused(className)
               | Default(className)
               | Dense(className)
               | Disabled(className)
               | Divider(className)
               | Gutters(className)
               | Button(className)
               | SecondaryAction(className) =>
                 Js.Dict.set(obj, to_string(classType), className)
               };
               obj;
             },
           ~init=Js.Dict.empty(),
         );
  };
  [@bs.module "material-ui/List/ListItem"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~button: bool=?,
      ~className: string=?,
      ~component: 'union_4=?,
      ~_ContainerComponent: 'union_e=?,
      ~_ContainerProps: Js.t({..})=?,
      ~dense: bool=?,
      ~disabled: bool=?,
      ~disableGutters: bool=?,
      ~divider: bool=?,
      ~value: 'union_c=?,
      ~onFocus: ReactEventRe.Focus.t => unit=?,
      ~onClick: ReactEventRe.Mouse.t => unit=?,
      ~classes: Js.Dict.t(string)=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~button: option(bool)=?,
        ~className: option(string)=?,
        ~component:
           option([ | `String(string) | `Element(ReasonReact.reactElement)])=?,
        ~_ContainerComponent:
           option([ | `String(string) | `Element(ReasonReact.reactElement)])=?,
        ~_ContainerProps: option(Js.t({..}))=?,
        ~dense: option(bool)=?,
        ~disabled: option(bool)=?,
        ~disableGutters: option(bool)=?,
        ~divider: option(bool)=?,
        ~value:
           option(
             [
               | `String(string)
               | `Int(int)
               | `Float(float)
               | `StringArray(array(string))
             ],
           )=?,
        ~onFocus: option(ReactEventRe.Focus.t => unit)=?,
        ~onClick: option(ReactEventRe.Mouse.t => unit)=?,
        ~classes: option(Classes.t)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~button?,
          ~className?,
          ~component=?Js.Option.map((. v) => unwrapValue(v), component),
          ~_ContainerComponent=?
            Js.Option.map((. v) => unwrapValue(v), _ContainerComponent),
          ~_ContainerProps?,
          ~dense?,
          ~disabled?,
          ~disableGutters?,
          ~divider?,
          ~value=?Js.Option.map((. v) => unwrapValue(v), value),
          ~onFocus?,
          ~onClick?,
          ~classes=?Js.Option.map((. v) => Classes.to_obj(v), classes),
          ~style?,
          (),
        ),
      children,
    );
};

module ListSubheader = {
  [@bs.deriving jsConverter]
  type color = [
    | [@bs.as "default"] `Default
    | [@bs.as "primary"] `Primary
    | [@bs.as "inherit"] `Inherit
  ];
  module Classes = {
    type classesType =
      | Root(string)
      | ColorPrimary(string)
      | ColorInherit(string)
      | Inset(string)
      | Sticky(string);
    type t = list(classesType);
    let to_string =
      fun
      | Root(_) => "root"
      | ColorPrimary(_) => "colorPrimary"
      | ColorInherit(_) => "colorInherit"
      | Inset(_) => "inset"
      | Sticky(_) => "sticky";
    let to_obj = listOfClasses =>
      listOfClasses
      |> StdLabels.List.fold_left(
           ~f=
             (obj, classType) => {
               switch (classType) {
               | Root(className)
               | ColorPrimary(className)
               | ColorInherit(className)
               | Inset(className)
               | Sticky(className) =>
                 Js.Dict.set(obj, to_string(classType), className)
               };
               obj;
             },
           ~init=Js.Dict.empty(),
         );
  };
  [@bs.module "material-ui/List/ListSubheader"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~className: string=?,
      ~color: string=?,
      ~component: 'union_d=?,
      ~disableSticky: bool=?,
      ~inset: bool=?,
      ~classes: Js.Dict.t(string)=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~className: option(string)=?,
        ~color: option(color)=?,
        ~component:
           option([ | `String(string) | `Element(ReasonReact.reactElement)])=?,
        ~disableSticky: option(bool)=?,
        ~inset: option(bool)=?,
        ~classes: option(Classes.t)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~className?,
          ~color=?Js.Option.map((. v) => colorToJs(v), color),
          ~component=?Js.Option.map((. v) => unwrapValue(v), component),
          ~disableSticky?,
          ~inset?,
          ~classes=?Js.Option.map((. v) => Classes.to_obj(v), classes),
          ~style?,
          (),
        ),
      children,
    );
};

module List = {
  module Classes = {
    type classesType =
      | Root(string)
      | Padding(string)
      | Dense(string)
      | Subheader(string);
    type t = list(classesType);
    let to_string =
      fun
      | Root(_) => "root"
      | Padding(_) => "padding"
      | Dense(_) => "dense"
      | Subheader(_) => "subheader";
    let to_obj = listOfClasses =>
      listOfClasses
      |> StdLabels.List.fold_left(
           ~f=
             (obj, classType) => {
               switch (classType) {
               | Root(className)
               | Padding(className)
               | Dense(className)
               | Subheader(className) =>
                 Js.Dict.set(obj, to_string(classType), className)
               };
               obj;
             },
           ~init=Js.Dict.empty(),
         );
  };
  [@bs.module "material-ui/List/List"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~className: string=?,
      ~component: 'union_k=?,
      ~dense: bool=?,
      ~disablePadding: bool=?,
      ~subheader: ReasonReact.reactElement=?,
      ~classes: Js.Dict.t(string)=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~className: option(string)=?,
        ~component:
           option([ | `String(string) | `Element(ReasonReact.reactElement)])=?,
        ~dense: option(bool)=?,
        ~disablePadding: option(bool)=?,
        ~subheader: option(ReasonReact.reactElement)=?,
        ~classes: option(Classes.t)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~className?,
          ~component=?Js.Option.map((. v) => unwrapValue(v), component),
          ~dense?,
          ~disablePadding?,
          ~subheader?,
          ~classes=?Js.Option.map((. v) => Classes.to_obj(v), classes),
          ~style?,
          (),
        ),
      children,
    );
};

module MenuItem = {
  module Classes = {
    type classesType =
      | Root(string)
      | Selected(string);
    type t = list(classesType);
    let to_string =
      fun
      | Root(_) => "root"
      | Selected(_) => "selected";
    let to_obj = listOfClasses =>
      listOfClasses
      |> StdLabels.List.fold_left(
           ~f=
             (obj, classType) => {
               switch (classType) {
               | Root(className)
               | Selected(className) =>
                 Js.Dict.set(obj, to_string(classType), className)
               };
               obj;
             },
           ~init=Js.Dict.empty(),
         );
  };
  [@bs.module "material-ui/Menu/MenuItem"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~className: string=?,
      ~component: 'union_d=?,
      ~role: string=?,
      ~selected: bool=?,
      ~value: 'union_o=?,
      ~onFocus: ReactEventRe.Focus.t => unit=?,
      ~onClick: ReactEventRe.Mouse.t => unit=?,
      ~button: bool=?,
      ~_ContainerComponent: 'union_e=?,
      ~_ContainerProps: Js.t({..})=?,
      ~dense: bool=?,
      ~disabled: bool=?,
      ~disableGutters: bool=?,
      ~divider: bool=?,
      ~classes: Js.Dict.t(string)=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~className: option(string)=?,
        ~component:
           option([ | `String(string) | `Element(ReasonReact.reactElement)])=?,
        ~role: option(string)=?,
        ~selected: option(bool)=?,
        ~value:
           option(
             [
               | `String(string)
               | `Int(int)
               | `Float(float)
               | `StringArray(array(string))
             ],
           )=?,
        ~onFocus: option(ReactEventRe.Focus.t => unit)=?,
        ~onClick: option(ReactEventRe.Mouse.t => unit)=?,
        ~button: option(bool)=?,
        ~_ContainerComponent:
           option([ | `String(string) | `Element(ReasonReact.reactElement)])=?,
        ~_ContainerProps: option(Js.t({..}))=?,
        ~dense: option(bool)=?,
        ~disabled: option(bool)=?,
        ~disableGutters: option(bool)=?,
        ~divider: option(bool)=?,
        ~classes: option(Classes.t)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~className?,
          ~component=?Js.Option.map((. v) => unwrapValue(v), component),
          ~role?,
          ~selected?,
          ~value=?Js.Option.map((. v) => unwrapValue(v), value),
          ~onFocus?,
          ~onClick?,
          ~button?,
          ~_ContainerComponent=?
            Js.Option.map((. v) => unwrapValue(v), _ContainerComponent),
          ~_ContainerProps?,
          ~dense?,
          ~disabled?,
          ~disableGutters?,
          ~divider?,
          ~classes=?Js.Option.map((. v) => Classes.to_obj(v), classes),
          ~style?,
          (),
        ),
      children,
    );
};

module MenuList = {
  [@bs.module "material-ui/Menu/MenuList"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~className: string=?,
      ~onBlur: ReactEventRe.Focus.t => unit=?,
      ~onKeyDown: ReactEventRe.Keyboard.t => unit=?,
      ~component: 'union_k=?,
      ~dense: bool=?,
      ~disablePadding: bool=?,
      ~subheader: ReasonReact.reactElement=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~className: option(string)=?,
        ~onBlur: option(ReactEventRe.Focus.t => unit)=?,
        ~onKeyDown: option(ReactEventRe.Keyboard.t => unit)=?,
        ~component:
           option([ | `String(string) | `Element(ReasonReact.reactElement)])=?,
        ~dense: option(bool)=?,
        ~disablePadding: option(bool)=?,
        ~subheader: option(ReasonReact.reactElement)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~className?,
          ~onBlur?,
          ~onKeyDown?,
          ~component=?Js.Option.map((. v) => unwrapValue(v), component),
          ~dense?,
          ~disablePadding?,
          ~subheader?,
          ~style?,
          (),
        ),
      children,
    );
};

module Menu = {
  [@bs.deriving jsConverter]
  type transitionDurationShape = {
    enter: int,
    exit: int,
  };
  [@bs.deriving jsConverter]
  type transitionDuration = [ | [@bs.as "auto"] `Auto];
  [@bs.deriving jsConverter]
  type anchorOriginShape = {
    horizontal: int,
    vertical: int,
  };
  [@bs.deriving jsConverter]
  type anchorPositionShape = {
    top: int,
    left: int,
  };
  [@bs.deriving jsConverter]
  type anchorReference = [
    | [@bs.as "anchorEl"] `AnchorEl
    | [@bs.as "anchorPosition"] `AnchorPosition
  ];
  [@bs.deriving jsConverter]
  type transformOriginShape = {
    horizontal: int,
    vertical: int,
  };
  module Classes = {
    type classesType =
      | Paper(string);
    type t = list(classesType);
    let to_string =
      fun
      | Paper(_) => "paper";
    let to_obj = listOfClasses =>
      listOfClasses
      |> StdLabels.List.fold_left(
           ~f=
             (obj, classType) => {
               switch (classType) {
               | Paper(className) =>
                 Js.Dict.set(obj, to_string(classType), className)
               };
               obj;
             },
           ~init=Js.Dict.empty(),
         );
  };
  [@bs.module "material-ui/Menu/Menu"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~anchorEl: Js.t({..})=?,
      ~_MenuListProps: Js.t({..})=?,
      ~onClose: unit => unit=?,
      ~onEnter: unit => unit=?,
      ~onEntered: unit => unit=?,
      ~onEntering: unit => unit=?,
      ~onExit: unit => unit=?,
      ~onExited: unit => unit=?,
      ~onExiting: unit => unit=?,
      ~_open: bool,
      ~_PaperProps: Js.t({..})=?,
      ~_PopoverClasses: Js.t({..})=?,
      ~theme: Js.t({..}),
      ~transitionDuration: 'union_z=?,
      ~action: ReasonReact.reactElement=?,
      ~anchorOrigin: 'shape_i=?,
      ~anchorPosition: 'shape_f=?,
      ~anchorReference: string=?,
      ~container: 'union_9=?,
      ~elevation: 'number_g=?,
      ~getContentAnchorEl: ReasonReact.reactElement=?,
      ~marginThreshold: 'number_0=?,
      ~role: string=?,
      ~transformOrigin: 'shape_2=?,
      ~transition: 'union_f=?,
      ~classes: Js.Dict.t(string)=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~anchorEl: option(Js.t({..}))=?,
        ~_MenuListProps: option(Js.t({..}))=?,
        ~onClose: option(unit => unit)=?,
        ~onEnter: option(unit => unit)=?,
        ~onEntered: option(unit => unit)=?,
        ~onEntering: option(unit => unit)=?,
        ~onExit: option(unit => unit)=?,
        ~onExited: option(unit => unit)=?,
        ~onExiting: option(unit => unit)=?,
        ~_open: bool,
        ~_PaperProps: option(Js.t({..}))=?,
        ~_PopoverClasses: option(Js.t({..}))=?,
        ~theme: Js.t({..}),
        ~transitionDuration:
           option(
             [
               | `Int(int)
               | `Float(float)
               | `Object(transitionDurationShape)
               | `Enum(transitionDuration)
             ],
           )=?,
        ~action: option(ReasonReact.reactElement)=?,
        ~anchorOrigin: option(anchorOriginShape)=?,
        ~anchorPosition: option(anchorPositionShape)=?,
        ~anchorReference: option(anchorReference)=?,
        ~container:
           option(
             [
               | `ObjectGeneric(Js.t({..}))
               | `Element(ReasonReact.reactElement)
             ],
           )=?,
        ~elevation: option([ | `Int(int) | `Float(float)])=?,
        ~getContentAnchorEl: option(ReasonReact.reactElement)=?,
        ~marginThreshold: option([ | `Int(int) | `Float(float)])=?,
        ~role: option(string)=?,
        ~transformOrigin: option(transformOriginShape)=?,
        ~transition:
           option([ | `String(string) | `Element(ReasonReact.reactElement)])=?,
        ~classes: option(Classes.t)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~anchorEl?,
          ~_MenuListProps?,
          ~onClose?,
          ~onEnter?,
          ~onEntered?,
          ~onEntering?,
          ~onExit?,
          ~onExited?,
          ~onExiting?,
          ~_open,
          ~_PaperProps?,
          ~_PopoverClasses?,
          ~theme,
          ~transitionDuration=?
            Js.Option.map(
              (. v) =>
                switch (v) {
                | `Enum(v) =>
                  unwrapValue(`String(transitionDurationToJs(v)))
                | `Object(v) =>
                  unwrapValue(`Element(transitionDurationShapeToJs(v)))
                | v => unwrapValue(v)
                },
              transitionDuration,
            ),
          ~action?,
          ~anchorOrigin=?
            Js.Option.map((. v) => anchorOriginShapeToJs(v), anchorOrigin),
          ~anchorPosition=?
            Js.Option.map(
              (. v) => anchorPositionShapeToJs(v),
              anchorPosition,
            ),
          ~anchorReference=?
            Js.Option.map((. v) => anchorReferenceToJs(v), anchorReference),
          ~container=?Js.Option.map((. v) => unwrapValue(v), container),
          ~elevation=?Js.Option.map((. v) => unwrapValue(v), elevation),
          ~getContentAnchorEl?,
          ~marginThreshold=?
            Js.Option.map((. v) => unwrapValue(v), marginThreshold),
          ~role?,
          ~transformOrigin=?
            Js.Option.map(
              (. v) => transformOriginShapeToJs(v),
              transformOrigin,
            ),
          ~transition=?Js.Option.map((. v) => unwrapValue(v), transition),
          ~classes=?Js.Option.map((. v) => Classes.to_obj(v), classes),
          ~style?,
          (),
        ),
      children,
    );
};

module MobileStepper = {
  [@bs.deriving jsConverter]
  type position = [
    | [@bs.as "bottom"] `Bottom
    | [@bs.as "top"] `Top
    | [@bs.as "static"] `Static
  ];
  [@bs.deriving jsConverter]
  type variant = [
    | [@bs.as "text"] `Text
    | [@bs.as "dots"] `Dots
    | [@bs.as "progress"] `Progress
  ];
  module Classes = {
    type classesType =
      | Root(string)
      | PositionBottom(string)
      | PositionTop(string)
      | PositionStatic(string)
      | Dots(string)
      | Dot(string)
      | DotActive(string)
      | Progress(string);
    type t = list(classesType);
    let to_string =
      fun
      | Root(_) => "root"
      | PositionBottom(_) => "positionBottom"
      | PositionTop(_) => "positionTop"
      | PositionStatic(_) => "positionStatic"
      | Dots(_) => "dots"
      | Dot(_) => "dot"
      | DotActive(_) => "dotActive"
      | Progress(_) => "progress";
    let to_obj = listOfClasses =>
      listOfClasses
      |> StdLabels.List.fold_left(
           ~f=
             (obj, classType) => {
               switch (classType) {
               | Root(className)
               | PositionBottom(className)
               | PositionTop(className)
               | PositionStatic(className)
               | Dots(className)
               | Dot(className)
               | DotActive(className)
               | Progress(className) =>
                 Js.Dict.set(obj, to_string(classType), className)
               };
               obj;
             },
           ~init=Js.Dict.empty(),
         );
  };
  [@bs.module "material-ui/MobileStepper/MobileStepper"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~activeStep: 'number_t=?,
      ~backButton: ReasonReact.reactElement=?,
      ~className: string=?,
      ~nextButton: ReasonReact.reactElement=?,
      ~position: string=?,
      ~steps: 'number_u,
      ~variant: string=?,
      ~component: 'union_h=?,
      ~elevation: 'number_j=?,
      ~square: bool=?,
      ~classes: Js.Dict.t(string)=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~activeStep: option([ | `Int(int) | `Float(float)])=?,
        ~backButton: option(ReasonReact.reactElement)=?,
        ~className: option(string)=?,
        ~nextButton: option(ReasonReact.reactElement)=?,
        ~position: option(position)=?,
        ~steps: [ | `Int(int) | `Float(float)],
        ~variant: option(variant)=?,
        ~component:
           option([ | `String(string) | `Element(ReasonReact.reactElement)])=?,
        ~elevation: option([ | `Int(int) | `Float(float)])=?,
        ~square: option(bool)=?,
        ~classes: option(Classes.t)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~activeStep=?Js.Option.map((. v) => unwrapValue(v), activeStep),
          ~backButton?,
          ~className?,
          ~nextButton?,
          ~position=?Js.Option.map((. v) => positionToJs(v), position),
          ~steps=unwrapValue(steps),
          ~variant=?Js.Option.map((. v) => variantToJs(v), variant),
          ~component=?Js.Option.map((. v) => unwrapValue(v), component),
          ~elevation=?Js.Option.map((. v) => unwrapValue(v), elevation),
          ~square?,
          ~classes=?Js.Option.map((. v) => Classes.to_obj(v), classes),
          ~style?,
          (),
        ),
      children,
    );
};

module Modal = {
  module Classes = {
    type classesType =
      | Root(string)
      | Hidden(string);
    type t = list(classesType);
    let to_string =
      fun
      | Root(_) => "root"
      | Hidden(_) => "hidden";
    let to_obj = listOfClasses =>
      listOfClasses
      |> StdLabels.List.fold_left(
           ~f=
             (obj, classType) => {
               switch (classType) {
               | Root(className)
               | Hidden(className) =>
                 Js.Dict.set(obj, to_string(classType), className)
               };
               obj;
             },
           ~init=Js.Dict.empty(),
         );
  };
  [@bs.module "material-ui/Modal/Modal"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~_BackdropComponent: 'union_u=?,
      ~_BackdropProps: Js.t({..})=?,
      ~className: string=?,
      ~container: 'union_l=?,
      ~disableAutoFocus: bool=?,
      ~disableBackdropClick: bool=?,
      ~disableEnforceFocus: bool=?,
      ~disableEscapeKeyDown: bool=?,
      ~disableRestoreFocus: bool=?,
      ~hideBackdrop: bool=?,
      ~keepMounted: bool=?,
      ~manager: Js.t({..})=?,
      ~onBackdropClick: ReactEventRe.Mouse.t => unit=?,
      ~onClose: unit => unit=?,
      ~onEscapeKeyDown: ReactEventRe.Keyboard.t => unit=?,
      ~onRendered: unit => unit=?,
      ~_open: bool,
      ~classes: Js.Dict.t(string)=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~_BackdropComponent:
           option([ | `String(string) | `Element(ReasonReact.reactElement)])=?,
        ~_BackdropProps: option(Js.t({..}))=?,
        ~className: option(string)=?,
        ~container:
           option(
             [
               | `ObjectGeneric(Js.t({..}))
               | `Element(ReasonReact.reactElement)
             ],
           )=?,
        ~disableAutoFocus: option(bool)=?,
        ~disableBackdropClick: option(bool)=?,
        ~disableEnforceFocus: option(bool)=?,
        ~disableEscapeKeyDown: option(bool)=?,
        ~disableRestoreFocus: option(bool)=?,
        ~hideBackdrop: option(bool)=?,
        ~keepMounted: option(bool)=?,
        ~manager: option(Js.t({..}))=?,
        ~onBackdropClick: option(ReactEventRe.Mouse.t => unit)=?,
        ~onClose: option(unit => unit)=?,
        ~onEscapeKeyDown: option(ReactEventRe.Keyboard.t => unit)=?,
        ~onRendered: option(unit => unit)=?,
        ~_open: bool,
        ~classes: option(Classes.t)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~_BackdropComponent=?
            Js.Option.map((. v) => unwrapValue(v), _BackdropComponent),
          ~_BackdropProps?,
          ~className?,
          ~container=?Js.Option.map((. v) => unwrapValue(v), container),
          ~disableAutoFocus?,
          ~disableBackdropClick?,
          ~disableEnforceFocus?,
          ~disableEscapeKeyDown?,
          ~disableRestoreFocus?,
          ~hideBackdrop?,
          ~keepMounted?,
          ~manager?,
          ~onBackdropClick?,
          ~onClose?,
          ~onEscapeKeyDown?,
          ~onRendered?,
          ~_open,
          ~classes=?Js.Option.map((. v) => Classes.to_obj(v), classes),
          ~style?,
          (),
        ),
      children,
    );
};

module MuiThemeProvider = {
  [@bs.module "material-ui/styles/MuiThemeProvider"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~disableStylesGeneration: bool=?,
      ~sheetsManager: Js.t({..})=?,
      ~theme: 'union_n,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~disableStylesGeneration: option(bool)=?,
        ~sheetsManager: option(Js.t({..}))=?,
        ~theme: [
           | `ObjectGeneric(Js.t({..}))
           | `Element(ReasonReact.reactElement)
         ],
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~disableStylesGeneration?,
          ~sheetsManager?,
          ~theme=unwrapValue(theme),
          ~style?,
          (),
        ),
      children,
    );
};

module Paper = {
  module Classes = {
    type classesType =
      | Root(string)
      | Rounded(string)
      | Elevation0(string)
      | Elevation1(string)
      | Elevation2(string)
      | Elevation3(string)
      | Elevation4(string)
      | Elevation5(string)
      | Elevation6(string)
      | Elevation7(string)
      | Elevation8(string)
      | Elevation9(string)
      | Elevation10(string)
      | Elevation11(string)
      | Elevation12(string)
      | Elevation13(string)
      | Elevation14(string)
      | Elevation15(string)
      | Elevation16(string)
      | Elevation17(string)
      | Elevation18(string)
      | Elevation19(string)
      | Elevation20(string)
      | Elevation21(string)
      | Elevation22(string)
      | Elevation23(string)
      | Elevation24(string);
    type t = list(classesType);
    let to_string =
      fun
      | Root(_) => "root"
      | Rounded(_) => "rounded"
      | Elevation0(_) => "elevation0"
      | Elevation1(_) => "elevation1"
      | Elevation2(_) => "elevation2"
      | Elevation3(_) => "elevation3"
      | Elevation4(_) => "elevation4"
      | Elevation5(_) => "elevation5"
      | Elevation6(_) => "elevation6"
      | Elevation7(_) => "elevation7"
      | Elevation8(_) => "elevation8"
      | Elevation9(_) => "elevation9"
      | Elevation10(_) => "elevation10"
      | Elevation11(_) => "elevation11"
      | Elevation12(_) => "elevation12"
      | Elevation13(_) => "elevation13"
      | Elevation14(_) => "elevation14"
      | Elevation15(_) => "elevation15"
      | Elevation16(_) => "elevation16"
      | Elevation17(_) => "elevation17"
      | Elevation18(_) => "elevation18"
      | Elevation19(_) => "elevation19"
      | Elevation20(_) => "elevation20"
      | Elevation21(_) => "elevation21"
      | Elevation22(_) => "elevation22"
      | Elevation23(_) => "elevation23"
      | Elevation24(_) => "elevation24";
    let to_obj = listOfClasses =>
      listOfClasses
      |> StdLabels.List.fold_left(
           ~f=
             (obj, classType) => {
               switch (classType) {
               | Root(className)
               | Rounded(className)
               | Elevation0(className)
               | Elevation1(className)
               | Elevation2(className)
               | Elevation3(className)
               | Elevation4(className)
               | Elevation5(className)
               | Elevation6(className)
               | Elevation7(className)
               | Elevation8(className)
               | Elevation9(className)
               | Elevation10(className)
               | Elevation11(className)
               | Elevation12(className)
               | Elevation13(className)
               | Elevation14(className)
               | Elevation15(className)
               | Elevation16(className)
               | Elevation17(className)
               | Elevation18(className)
               | Elevation19(className)
               | Elevation20(className)
               | Elevation21(className)
               | Elevation22(className)
               | Elevation23(className)
               | Elevation24(className) =>
                 Js.Dict.set(obj, to_string(classType), className)
               };
               obj;
             },
           ~init=Js.Dict.empty(),
         );
  };
  [@bs.module "material-ui/Paper/Paper"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~className: string=?,
      ~component: 'union_h=?,
      ~elevation: 'number_j=?,
      ~square: bool=?,
      ~classes: Js.Dict.t(string)=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~className: option(string)=?,
        ~component:
           option([ | `String(string) | `Element(ReasonReact.reactElement)])=?,
        ~elevation: option([ | `Int(int) | `Float(float)])=?,
        ~square: option(bool)=?,
        ~classes: option(Classes.t)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~className?,
          ~component=?Js.Option.map((. v) => unwrapValue(v), component),
          ~elevation=?Js.Option.map((. v) => unwrapValue(v), elevation),
          ~square?,
          ~classes=?Js.Option.map((. v) => Classes.to_obj(v), classes),
          ~style?,
          (),
        ),
      children,
    );
};

module Popover = {
  [@bs.deriving jsConverter]
  type anchorOriginShape = {
    horizontal: int,
    vertical: int,
  };
  [@bs.deriving jsConverter]
  type anchorPositionShape = {
    top: int,
    left: int,
  };
  [@bs.deriving jsConverter]
  type anchorReference = [
    | [@bs.as "anchorEl"] `AnchorEl
    | [@bs.as "anchorPosition"] `AnchorPosition
  ];
  [@bs.deriving jsConverter]
  type transformOriginShape = {
    horizontal: int,
    vertical: int,
  };
  [@bs.deriving jsConverter]
  type transitionDurationShape = {
    enter: int,
    exit: int,
  };
  [@bs.deriving jsConverter]
  type transitionDuration = [ | [@bs.as "auto"] `Auto];
  module Classes = {
    type classesType =
      | Paper(string);
    type t = list(classesType);
    let to_string =
      fun
      | Paper(_) => "paper";
    let to_obj = listOfClasses =>
      listOfClasses
      |> StdLabels.List.fold_left(
           ~f=
             (obj, classType) => {
               switch (classType) {
               | Paper(className) =>
                 Js.Dict.set(obj, to_string(classType), className)
               };
               obj;
             },
           ~init=Js.Dict.empty(),
         );
  };
  [@bs.module "material-ui/Popover/Popover"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~action: ReasonReact.reactElement=?,
      ~anchorEl: 'union_4=?,
      ~anchorOrigin: 'shape_i=?,
      ~anchorPosition: 'shape_f=?,
      ~anchorReference: string=?,
      ~container: 'union_9=?,
      ~elevation: 'number_g=?,
      ~getContentAnchorEl: ReasonReact.reactElement=?,
      ~marginThreshold: 'number_0=?,
      ~onClose: unit => unit=?,
      ~onEnter: unit => unit=?,
      ~onEntered: unit => unit=?,
      ~onEntering: unit => unit=?,
      ~onExit: unit => unit=?,
      ~onExited: unit => unit=?,
      ~onExiting: unit => unit=?,
      ~_open: bool,
      ~_PaperProps: Js.t({..})=?,
      ~role: string=?,
      ~transformOrigin: 'shape_2=?,
      ~transition: 'union_f=?,
      ~transitionDuration: 'union_w=?,
      ~_BackdropComponent: 'union_u=?,
      ~_BackdropProps: Js.t({..})=?,
      ~className: string=?,
      ~disableAutoFocus: bool=?,
      ~disableBackdropClick: bool=?,
      ~disableEnforceFocus: bool=?,
      ~disableEscapeKeyDown: bool=?,
      ~disableRestoreFocus: bool=?,
      ~hideBackdrop: bool=?,
      ~keepMounted: bool=?,
      ~manager: Js.t({..})=?,
      ~onBackdropClick: ReactEventRe.Mouse.t => unit=?,
      ~onEscapeKeyDown: ReactEventRe.Keyboard.t => unit=?,
      ~onRendered: unit => unit=?,
      ~classes: Js.Dict.t(string)=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~action: option(ReasonReact.reactElement)=?,
        ~anchorEl:
           option(
             [
               | `ObjectGeneric(Js.t({..}))
               | `Element(ReasonReact.reactElement)
             ],
           )=?,
        ~anchorOrigin: option(anchorOriginShape)=?,
        ~anchorPosition: option(anchorPositionShape)=?,
        ~anchorReference: option(anchorReference)=?,
        ~container:
           option(
             [
               | `ObjectGeneric(Js.t({..}))
               | `Element(ReasonReact.reactElement)
             ],
           )=?,
        ~elevation: option([ | `Int(int) | `Float(float)])=?,
        ~getContentAnchorEl: option(ReasonReact.reactElement)=?,
        ~marginThreshold: option([ | `Int(int) | `Float(float)])=?,
        ~onClose: option(unit => unit)=?,
        ~onEnter: option(unit => unit)=?,
        ~onEntered: option(unit => unit)=?,
        ~onEntering: option(unit => unit)=?,
        ~onExit: option(unit => unit)=?,
        ~onExited: option(unit => unit)=?,
        ~onExiting: option(unit => unit)=?,
        ~_open: bool,
        ~_PaperProps: option(Js.t({..}))=?,
        ~role: option(string)=?,
        ~transformOrigin: option(transformOriginShape)=?,
        ~transition:
           option([ | `String(string) | `Element(ReasonReact.reactElement)])=?,
        ~transitionDuration:
           option(
             [
               | `Int(int)
               | `Float(float)
               | `Object(transitionDurationShape)
               | `Enum(transitionDuration)
             ],
           )=?,
        ~_BackdropComponent:
           option([ | `String(string) | `Element(ReasonReact.reactElement)])=?,
        ~_BackdropProps: option(Js.t({..}))=?,
        ~className: option(string)=?,
        ~disableAutoFocus: option(bool)=?,
        ~disableBackdropClick: option(bool)=?,
        ~disableEnforceFocus: option(bool)=?,
        ~disableEscapeKeyDown: option(bool)=?,
        ~disableRestoreFocus: option(bool)=?,
        ~hideBackdrop: option(bool)=?,
        ~keepMounted: option(bool)=?,
        ~manager: option(Js.t({..}))=?,
        ~onBackdropClick: option(ReactEventRe.Mouse.t => unit)=?,
        ~onEscapeKeyDown: option(ReactEventRe.Keyboard.t => unit)=?,
        ~onRendered: option(unit => unit)=?,
        ~classes: option(Classes.t)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~action?,
          ~anchorEl=?Js.Option.map((. v) => unwrapValue(v), anchorEl),
          ~anchorOrigin=?
            Js.Option.map((. v) => anchorOriginShapeToJs(v), anchorOrigin),
          ~anchorPosition=?
            Js.Option.map(
              (. v) => anchorPositionShapeToJs(v),
              anchorPosition,
            ),
          ~anchorReference=?
            Js.Option.map((. v) => anchorReferenceToJs(v), anchorReference),
          ~container=?Js.Option.map((. v) => unwrapValue(v), container),
          ~elevation=?Js.Option.map((. v) => unwrapValue(v), elevation),
          ~getContentAnchorEl?,
          ~marginThreshold=?
            Js.Option.map((. v) => unwrapValue(v), marginThreshold),
          ~onClose?,
          ~onEnter?,
          ~onEntered?,
          ~onEntering?,
          ~onExit?,
          ~onExited?,
          ~onExiting?,
          ~_open,
          ~_PaperProps?,
          ~role?,
          ~transformOrigin=?
            Js.Option.map(
              (. v) => transformOriginShapeToJs(v),
              transformOrigin,
            ),
          ~transition=?Js.Option.map((. v) => unwrapValue(v), transition),
          ~transitionDuration=?
            Js.Option.map(
              (. v) =>
                switch (v) {
                | `Enum(v) =>
                  unwrapValue(`String(transitionDurationToJs(v)))
                | `Object(v) =>
                  unwrapValue(`Element(transitionDurationShapeToJs(v)))
                | v => unwrapValue(v)
                },
              transitionDuration,
            ),
          ~_BackdropComponent=?
            Js.Option.map((. v) => unwrapValue(v), _BackdropComponent),
          ~_BackdropProps?,
          ~className?,
          ~disableAutoFocus?,
          ~disableBackdropClick?,
          ~disableEnforceFocus?,
          ~disableEscapeKeyDown?,
          ~disableRestoreFocus?,
          ~hideBackdrop?,
          ~keepMounted?,
          ~manager?,
          ~onBackdropClick?,
          ~onEscapeKeyDown?,
          ~onRendered?,
          ~classes=?Js.Option.map((. v) => Classes.to_obj(v), classes),
          ~style?,
          (),
        ),
      children,
    );
};

module Portal = {
  [@bs.module "material-ui/Portal/Portal"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~container: 'union_0=?,
      ~onRendered: unit => unit=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~container:
           option(
             [
               | `ObjectGeneric(Js.t({..}))
               | `Element(ReasonReact.reactElement)
             ],
           )=?,
        ~onRendered: option(unit => unit)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~container=?Js.Option.map((. v) => unwrapValue(v), container),
          ~onRendered?,
          ~style?,
          (),
        ),
      children,
    );
};

module RadioGroup = {
  [@bs.module "material-ui/Radio/RadioGroup"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~name: string=?,
      ~onBlur: ReactEventRe.Focus.t => unit=?,
      ~onChange: ReactEventRe.Form.t => unit=?,
      ~onKeyDown: ReactEventRe.Keyboard.t => unit=?,
      ~value: string=?,
      ~className: string=?,
      ~row: bool=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~name: option(string)=?,
        ~onBlur: option(ReactEventRe.Focus.t => unit)=?,
        ~onChange: option(ReactEventRe.Form.t => unit)=?,
        ~onKeyDown: option(ReactEventRe.Keyboard.t => unit)=?,
        ~value: option(string)=?,
        ~className: option(string)=?,
        ~row: option(bool)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~name?,
          ~onBlur?,
          ~onChange?,
          ~onKeyDown?,
          ~value?,
          ~className?,
          ~row?,
          ~style?,
          (),
        ),
      children,
    );
};

module Radio = {
  [@bs.deriving jsConverter]
  type color = [
    | [@bs.as "primary"] `Primary
    | [@bs.as "secondary"] `Secondary
    | [@bs.as "default"] `Default
  ];
  module Classes = {
    type classesType =
      | Default(string)
      | Checked(string)
      | CheckedPrimary(string)
      | CheckedSecondary(string)
      | Disabled(string);
    type t = list(classesType);
    let to_string =
      fun
      | Default(_) => "default"
      | Checked(_) => "checked"
      | CheckedPrimary(_) => "checkedPrimary"
      | CheckedSecondary(_) => "checkedSecondary"
      | Disabled(_) => "disabled";
    let to_obj = listOfClasses =>
      listOfClasses
      |> StdLabels.List.fold_left(
           ~f=
             (obj, classType) => {
               switch (classType) {
               | Default(className)
               | Checked(className)
               | CheckedPrimary(className)
               | CheckedSecondary(className)
               | Disabled(className) =>
                 Js.Dict.set(obj, to_string(classType), className)
               };
               obj;
             },
           ~init=Js.Dict.empty(),
         );
  };
  [@bs.module "material-ui/Radio/Radio"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~checked: 'union_7=?,
      ~checkedIcon: ReasonReact.reactElement=?,
      ~color: string=?,
      ~disabled: bool=?,
      ~disableRipple: bool=?,
      ~icon: ReasonReact.reactElement=?,
      ~id: string=?,
      ~inputProps: Js.t({..})=?,
      ~inputRef: ReasonReact.reactElement=?,
      ~onChange: ReactEventRe.Form.t => unit=?,
      ~_type: string=?,
      ~value: string=?,
      ~classes: Js.Dict.t(string)=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~checked: option([ | `Bool(bool) | `String(string)])=?,
        ~checkedIcon: option(ReasonReact.reactElement)=?,
        ~color: option(color)=?,
        ~disabled: option(bool)=?,
        ~disableRipple: option(bool)=?,
        ~icon: option(ReasonReact.reactElement)=?,
        ~id: option(string)=?,
        ~inputProps: option(Js.t({..}))=?,
        ~inputRef: option(ReasonReact.reactElement)=?,
        ~onChange: option(ReactEventRe.Form.t => unit)=?,
        ~_type: option(string)=?,
        ~value: option(string)=?,
        ~classes: option(Classes.t)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~checked=?Js.Option.map((. v) => unwrapValue(v), checked),
          ~checkedIcon?,
          ~color=?Js.Option.map((. v) => colorToJs(v), color),
          ~disabled?,
          ~disableRipple?,
          ~icon?,
          ~id?,
          ~inputProps?,
          ~inputRef?,
          ~onChange?,
          ~_type?,
          ~value?,
          ~classes=?Js.Option.map((. v) => Classes.to_obj(v), classes),
          ~style?,
          (),
        ),
      children,
    );
};

module Select = {
  [@bs.deriving jsConverter]
  type margin = [ | [@bs.as "dense"] `Dense | [@bs.as "none"] `None];
  module Classes = {
    type classesType =
      | Root(string)
      | Select(string)
      | SelectMenu(string)
      | Disabled(string)
      | Icon(string);
    type t = list(classesType);
    let to_string =
      fun
      | Root(_) => "root"
      | Select(_) => "select"
      | SelectMenu(_) => "selectMenu"
      | Disabled(_) => "disabled"
      | Icon(_) => "icon";
    let to_obj = listOfClasses =>
      listOfClasses
      |> StdLabels.List.fold_left(
           ~f=
             (obj, classType) => {
               switch (classType) {
               | Root(className)
               | Select(className)
               | SelectMenu(className)
               | Disabled(className)
               | Icon(className) =>
                 Js.Dict.set(obj, to_string(classType), className)
               };
               obj;
             },
           ~init=Js.Dict.empty(),
         );
  };
  [@bs.module "material-ui/Select/Select"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~autoWidth: bool=?,
      ~displayEmpty: bool=?,
      ~input: ReasonReact.reactElement=?,
      ~inputProps: Js.t({..})=?,
      ~_MenuProps: Js.t({..})=?,
      ~multiple: bool=?,
      ~native: bool=?,
      ~onChange: ReactEventRe.Form.t => unit=?,
      ~onClose: unit => unit=?,
      ~onOpen: unit => unit=?,
      ~_open: bool=?,
      ~renderValue: ReasonReact.reactElement=?,
      ~_SelectDisplayProps: Js.t({..})=?,
      ~value: 'union_f=?,
      ~autoComplete: string=?,
      ~autoFocus: bool=?,
      ~className: string=?,
      ~defaultValue: 'union_i=?,
      ~disabled: bool=?,
      ~disableUnderline: bool=?,
      ~endAdornment: ReasonReact.reactElement=?,
      ~error: bool=?,
      ~fullWidth: bool=?,
      ~id: string=?,
      ~inputComponent: 'any_r=?,
      ~inputRef: ReasonReact.reactElement=?,
      ~margin: string=?,
      ~multiline: bool=?,
      ~name: string=?,
      ~onBlur: ReactEventRe.Focus.t => unit=?,
      ~onEmpty: ReactEventRe.Synthetic.t => unit=?,
      ~onFilled: ReactEventRe.Synthetic.t => unit=?,
      ~onFocus: ReactEventRe.Focus.t => unit=?,
      ~onKeyDown: ReactEventRe.Keyboard.t => unit=?,
      ~onKeyUp: ReactEventRe.Keyboard.t => unit=?,
      ~placeholder: string=?,
      ~readOnly: bool=?,
      ~rows: 'union_l=?,
      ~rowsMax: 'union_2=?,
      ~startAdornment: ReasonReact.reactElement=?,
      ~_type: string=?,
      ~classes: Js.Dict.t(string)=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~autoWidth: option(bool)=?,
        ~displayEmpty: option(bool)=?,
        ~input: option(ReasonReact.reactElement)=?,
        ~inputProps: option(Js.t({..}))=?,
        ~_MenuProps: option(Js.t({..}))=?,
        ~multiple: option(bool)=?,
        ~native: option(bool)=?,
        ~onChange: option(ReactEventRe.Form.t => unit)=?,
        ~onClose: option(unit => unit)=?,
        ~onOpen: option(unit => unit)=?,
        ~_open: option(bool)=?,
        ~renderValue: option(ReasonReact.reactElement)=?,
        ~_SelectDisplayProps: option(Js.t({..}))=?,
        ~value:
           option(
             [
               | `String(string)
               | `Int(int)
               | `Float(float)
               | `StringArray(array(string))
               | `IntArray(array(int))
               | `FloatArray(array(float))
             ],
           )=?,
        ~autoComplete: option(string)=?,
        ~autoFocus: option(bool)=?,
        ~className: option(string)=?,
        ~defaultValue:
           option([ | `String(string) | `Int(int) | `Float(float)])=?,
        ~disabled: option(bool)=?,
        ~disableUnderline: option(bool)=?,
        ~endAdornment: option(ReasonReact.reactElement)=?,
        ~error: option(bool)=?,
        ~fullWidth: option(bool)=?,
        ~id: option(string)=?,
        ~inputComponent: option('any_r)=?,
        ~inputRef: option(ReasonReact.reactElement)=?,
        ~margin: option(margin)=?,
        ~multiline: option(bool)=?,
        ~name: option(string)=?,
        ~onBlur: option(ReactEventRe.Focus.t => unit)=?,
        ~onEmpty: option(ReactEventRe.Synthetic.t => unit)=?,
        ~onFilled: option(ReactEventRe.Synthetic.t => unit)=?,
        ~onFocus: option(ReactEventRe.Focus.t => unit)=?,
        ~onKeyDown: option(ReactEventRe.Keyboard.t => unit)=?,
        ~onKeyUp: option(ReactEventRe.Keyboard.t => unit)=?,
        ~placeholder: option(string)=?,
        ~readOnly: option(bool)=?,
        ~rows: option([ | `String(string) | `Int(int) | `Float(float)])=?,
        ~rowsMax: option([ | `String(string) | `Int(int) | `Float(float)])=?,
        ~startAdornment: option(ReasonReact.reactElement)=?,
        ~_type: option(string)=?,
        ~classes: option(Classes.t)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~autoWidth?,
          ~displayEmpty?,
          ~input?,
          ~inputProps?,
          ~_MenuProps?,
          ~multiple?,
          ~native?,
          ~onChange?,
          ~onClose?,
          ~onOpen?,
          ~_open?,
          ~renderValue?,
          ~_SelectDisplayProps?,
          ~value=?Js.Option.map((. v) => unwrapValue(v), value),
          ~autoComplete?,
          ~autoFocus?,
          ~className?,
          ~defaultValue=?
            Js.Option.map((. v) => unwrapValue(v), defaultValue),
          ~disabled?,
          ~disableUnderline?,
          ~endAdornment?,
          ~error?,
          ~fullWidth?,
          ~id?,
          ~inputComponent?,
          ~inputRef?,
          ~margin=?Js.Option.map((. v) => marginToJs(v), margin),
          ~multiline?,
          ~name?,
          ~onBlur?,
          ~onEmpty?,
          ~onFilled?,
          ~onFocus?,
          ~onKeyDown?,
          ~onKeyUp?,
          ~placeholder?,
          ~readOnly?,
          ~rows=?Js.Option.map((. v) => unwrapValue(v), rows),
          ~rowsMax=?Js.Option.map((. v) => unwrapValue(v), rowsMax),
          ~startAdornment?,
          ~_type?,
          ~classes=?Js.Option.map((. v) => Classes.to_obj(v), classes),
          ~style?,
          (),
        ),
      children,
    );
};

module Slide = {
  [@bs.deriving jsConverter]
  type direction = [
    | [@bs.as "left"] `Left
    | [@bs.as "right"] `Right
    | [@bs.as "up"] `Up
    | [@bs.as "down"] `Down
  ];
  [@bs.deriving jsConverter]
  type timeoutShape = {
    enter: int,
    exit: int,
  };
  [@bs.module "material-ui/transitions/Slide"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~direction: string=?,
      ~_in: bool=?,
      ~onEnter: unit => unit=?,
      ~onEntering: unit => unit=?,
      ~onExit: unit => unit=?,
      ~onExited: unit => unit=?,
      ~theme: Js.t({..}),
      ~timeout: 'union_l=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~direction: option(direction)=?,
        ~_in: option(bool)=?,
        ~onEnter: option(unit => unit)=?,
        ~onEntering: option(unit => unit)=?,
        ~onExit: option(unit => unit)=?,
        ~onExited: option(unit => unit)=?,
        ~theme: Js.t({..}),
        ~timeout:
           option([ | `Int(int) | `Float(float) | `Object(timeoutShape)])=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~direction=?Js.Option.map((. v) => directionToJs(v), direction),
          ~_in?,
          ~onEnter?,
          ~onEntering?,
          ~onExit?,
          ~onExited?,
          ~theme,
          ~timeout=?
            Js.Option.map(
              (. v) =>
                switch (v) {
                | `Object(v) => unwrapValue(`Element(timeoutShapeToJs(v)))
                | v => unwrapValue(v)
                },
              timeout,
            ),
          ~style?,
          (),
        ),
      children,
    );
};

module SnackbarContent = {
  module Classes = {
    type classesType =
      | Root(string)
      | Message(string)
      | Action(string);
    type t = list(classesType);
    let to_string =
      fun
      | Root(_) => "root"
      | Message(_) => "message"
      | Action(_) => "action";
    let to_obj = listOfClasses =>
      listOfClasses
      |> StdLabels.List.fold_left(
           ~f=
             (obj, classType) => {
               switch (classType) {
               | Root(className)
               | Message(className)
               | Action(className) =>
                 Js.Dict.set(obj, to_string(classType), className)
               };
               obj;
             },
           ~init=Js.Dict.empty(),
         );
  };
  [@bs.module "material-ui/Snackbar/SnackbarContent"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~action: ReasonReact.reactElement=?,
      ~className: string=?,
      ~message: ReasonReact.reactElement=?,
      ~component: 'union_h=?,
      ~elevation: 'number_j=?,
      ~square: bool=?,
      ~classes: Js.Dict.t(string)=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~action: option(ReasonReact.reactElement)=?,
        ~className: option(string)=?,
        ~message: option(ReasonReact.reactElement)=?,
        ~component:
           option([ | `String(string) | `Element(ReasonReact.reactElement)])=?,
        ~elevation: option([ | `Int(int) | `Float(float)])=?,
        ~square: option(bool)=?,
        ~classes: option(Classes.t)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~action?,
          ~className?,
          ~message?,
          ~component=?Js.Option.map((. v) => unwrapValue(v), component),
          ~elevation=?Js.Option.map((. v) => unwrapValue(v), elevation),
          ~square?,
          ~classes=?Js.Option.map((. v) => Classes.to_obj(v), classes),
          ~style?,
          (),
        ),
      children,
    );
};

module Snackbar = {
  [@bs.deriving jsConverter]
  type anchorOriginShape = {
    horizontal: int,
    vertical: int,
  };
  [@bs.deriving jsConverter]
  type transitionDurationShape = {
    enter: int,
    exit: int,
  };
  module Classes = {
    type classesType =
      | Root(string)
      | AnchorOriginTopCenter(string)
      | AnchorOriginBottomCenter(string)
      | AnchorOriginTopRight(string)
      | AnchorOriginBottomRight(string)
      | AnchorOriginTopLeft(string)
      | AnchorOriginBottomLeft(string);
    type t = list(classesType);
    let to_string =
      fun
      | Root(_) => "root"
      | AnchorOriginTopCenter(_) => "anchorOriginTopCenter"
      | AnchorOriginBottomCenter(_) => "anchorOriginBottomCenter"
      | AnchorOriginTopRight(_) => "anchorOriginTopRight"
      | AnchorOriginBottomRight(_) => "anchorOriginBottomRight"
      | AnchorOriginTopLeft(_) => "anchorOriginTopLeft"
      | AnchorOriginBottomLeft(_) => "anchorOriginBottomLeft";
    let to_obj = listOfClasses =>
      listOfClasses
      |> StdLabels.List.fold_left(
           ~f=
             (obj, classType) => {
               switch (classType) {
               | Root(className)
               | AnchorOriginTopCenter(className)
               | AnchorOriginBottomCenter(className)
               | AnchorOriginTopRight(className)
               | AnchorOriginBottomRight(className)
               | AnchorOriginTopLeft(className)
               | AnchorOriginBottomLeft(className) =>
                 Js.Dict.set(obj, to_string(classType), className)
               };
               obj;
             },
           ~init=Js.Dict.empty(),
         );
  };
  [@bs.module "material-ui/Snackbar/Snackbar"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~action: ReasonReact.reactElement=?,
      ~anchorOrigin: 'shape_m=?,
      ~autoHideDuration: 'number_4=?,
      ~className: string=?,
      ~disableWindowBlurListener: bool=?,
      ~key: 'any_o=?,
      ~message: ReasonReact.reactElement=?,
      ~onClose: unit => unit=?,
      ~onEnter: unit => unit=?,
      ~onEntered: unit => unit=?,
      ~onEntering: unit => unit=?,
      ~onExit: unit => unit=?,
      ~onExited: unit => unit=?,
      ~onExiting: unit => unit=?,
      ~onMouseEnter: ReactEventRe.Mouse.t => unit=?,
      ~onMouseLeave: ReactEventRe.Mouse.t => unit=?,
      ~_open: bool=?,
      ~resumeHideDuration: 'number_6=?,
      ~_SnackbarContentProps: Js.t({..})=?,
      ~transition: 'union_w=?,
      ~transitionDuration: 'union_k=?,
      ~classes: Js.Dict.t(string)=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~action: option(ReasonReact.reactElement)=?,
        ~anchorOrigin: option(anchorOriginShape)=?,
        ~autoHideDuration: option([ | `Int(int) | `Float(float)])=?,
        ~className: option(string)=?,
        ~disableWindowBlurListener: option(bool)=?,
        ~key: option('any_o)=?,
        ~message: option(ReasonReact.reactElement)=?,
        ~onClose: option(unit => unit)=?,
        ~onEnter: option(unit => unit)=?,
        ~onEntered: option(unit => unit)=?,
        ~onEntering: option(unit => unit)=?,
        ~onExit: option(unit => unit)=?,
        ~onExited: option(unit => unit)=?,
        ~onExiting: option(unit => unit)=?,
        ~onMouseEnter: option(ReactEventRe.Mouse.t => unit)=?,
        ~onMouseLeave: option(ReactEventRe.Mouse.t => unit)=?,
        ~_open: option(bool)=?,
        ~resumeHideDuration: option([ | `Int(int) | `Float(float)])=?,
        ~_SnackbarContentProps: option(Js.t({..}))=?,
        ~transition:
           option([ | `String(string) | `Element(ReasonReact.reactElement)])=?,
        ~transitionDuration:
           option(
             [
               | `Int(int)
               | `Float(float)
               | `Object(transitionDurationShape)
             ],
           )=?,
        ~classes: option(Classes.t)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~action?,
          ~anchorOrigin=?
            Js.Option.map((. v) => anchorOriginShapeToJs(v), anchorOrigin),
          ~autoHideDuration=?
            Js.Option.map((. v) => unwrapValue(v), autoHideDuration),
          ~className?,
          ~disableWindowBlurListener?,
          ~key?,
          ~message?,
          ~onClose?,
          ~onEnter?,
          ~onEntered?,
          ~onEntering?,
          ~onExit?,
          ~onExited?,
          ~onExiting?,
          ~onMouseEnter?,
          ~onMouseLeave?,
          ~_open?,
          ~resumeHideDuration=?
            Js.Option.map((. v) => unwrapValue(v), resumeHideDuration),
          ~_SnackbarContentProps?,
          ~transition=?Js.Option.map((. v) => unwrapValue(v), transition),
          ~transitionDuration=?
            Js.Option.map(
              (. v) =>
                switch (v) {
                | `Object(v) =>
                  unwrapValue(`Element(transitionDurationShapeToJs(v)))
                | v => unwrapValue(v)
                },
              transitionDuration,
            ),
          ~classes=?Js.Option.map((. v) => Classes.to_obj(v), classes),
          ~style?,
          (),
        ),
      children,
    );
};

module StepButton = {
  [@bs.deriving jsConverter]
  type orientation = [
    | [@bs.as "horizontal"] `Horizontal
    | [@bs.as "vertical"] `Vertical
  ];
  module Classes = {
    type classesType =
      | Root(string)
      | Vertical(string)
      | TouchRipple(string);
    type t = list(classesType);
    let to_string =
      fun
      | Root(_) => "root"
      | Vertical(_) => "vertical"
      | TouchRipple(_) => "touchRipple";
    let to_obj = listOfClasses =>
      listOfClasses
      |> StdLabels.List.fold_left(
           ~f=
             (obj, classType) => {
               switch (classType) {
               | Root(className)
               | Vertical(className)
               | TouchRipple(className) =>
                 Js.Dict.set(obj, to_string(classType), className)
               };
               obj;
             },
           ~init=Js.Dict.empty(),
         );
  };
  [@bs.module "material-ui/Stepper/StepButton"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~active: bool=?,
      ~alternativeLabel: bool=?,
      ~className: string=?,
      ~completed: bool=?,
      ~disabled: bool=?,
      ~icon: ReasonReact.reactElement=?,
      ~last: bool=?,
      ~optional: ReasonReact.reactElement=?,
      ~orientation: string=?,
      ~buttonRef: ReasonReact.reactElement=?,
      ~centerRipple: bool=?,
      ~component: 'union_0=?,
      ~disableRipple: bool=?,
      ~focusRipple: bool=?,
      ~onBlur: ReactEventRe.Focus.t => unit=?,
      ~onClick: ReactEventRe.Mouse.t => unit=?,
      ~onFocus: ReactEventRe.Focus.t => unit=?,
      ~onKeyboardFocus: ReactEventRe.Focus.t => unit=?,
      ~onKeyDown: ReactEventRe.Keyboard.t => unit=?,
      ~onKeyUp: ReactEventRe.Keyboard.t => unit=?,
      ~onMouseDown: ReactEventRe.Mouse.t => unit=?,
      ~onMouseLeave: ReactEventRe.Mouse.t => unit=?,
      ~onMouseUp: ReactEventRe.Mouse.t => unit=?,
      ~onTouchEnd: ReactEventRe.Touch.t => unit=?,
      ~onTouchMove: ReactEventRe.Touch.t => unit=?,
      ~onTouchStart: ReactEventRe.Touch.t => unit=?,
      ~role: string=?,
      ~tabIndex: 'union_o=?,
      ~_TouchRippleProps: Js.t({..})=?,
      ~_type: string=?,
      ~classes: Js.Dict.t(string)=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~active: option(bool)=?,
        ~alternativeLabel: option(bool)=?,
        ~className: option(string)=?,
        ~completed: option(bool)=?,
        ~disabled: option(bool)=?,
        ~icon: option(ReasonReact.reactElement)=?,
        ~last: option(bool)=?,
        ~optional: option(ReasonReact.reactElement)=?,
        ~orientation: option(orientation)=?,
        ~buttonRef: option(ReasonReact.reactElement)=?,
        ~centerRipple: option(bool)=?,
        ~component:
           option([ | `String(string) | `Element(ReasonReact.reactElement)])=?,
        ~disableRipple: option(bool)=?,
        ~focusRipple: option(bool)=?,
        ~onBlur: option(ReactEventRe.Focus.t => unit)=?,
        ~onClick: option(ReactEventRe.Mouse.t => unit)=?,
        ~onFocus: option(ReactEventRe.Focus.t => unit)=?,
        ~onKeyboardFocus: option(ReactEventRe.Focus.t => unit)=?,
        ~onKeyDown: option(ReactEventRe.Keyboard.t => unit)=?,
        ~onKeyUp: option(ReactEventRe.Keyboard.t => unit)=?,
        ~onMouseDown: option(ReactEventRe.Mouse.t => unit)=?,
        ~onMouseLeave: option(ReactEventRe.Mouse.t => unit)=?,
        ~onMouseUp: option(ReactEventRe.Mouse.t => unit)=?,
        ~onTouchEnd: option(ReactEventRe.Touch.t => unit)=?,
        ~onTouchMove: option(ReactEventRe.Touch.t => unit)=?,
        ~onTouchStart: option(ReactEventRe.Touch.t => unit)=?,
        ~role: option(string)=?,
        ~tabIndex: option([ | `Int(int) | `Float(float) | `String(string)])=?,
        ~_TouchRippleProps: option(Js.t({..}))=?,
        ~_type: option(string)=?,
        ~classes: option(Classes.t)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~active?,
          ~alternativeLabel?,
          ~className?,
          ~completed?,
          ~disabled?,
          ~icon?,
          ~last?,
          ~optional?,
          ~orientation=?
            Js.Option.map((. v) => orientationToJs(v), orientation),
          ~buttonRef?,
          ~centerRipple?,
          ~component=?Js.Option.map((. v) => unwrapValue(v), component),
          ~disableRipple?,
          ~focusRipple?,
          ~onBlur?,
          ~onClick?,
          ~onFocus?,
          ~onKeyboardFocus?,
          ~onKeyDown?,
          ~onKeyUp?,
          ~onMouseDown?,
          ~onMouseLeave?,
          ~onMouseUp?,
          ~onTouchEnd?,
          ~onTouchMove?,
          ~onTouchStart?,
          ~role?,
          ~tabIndex=?Js.Option.map((. v) => unwrapValue(v), tabIndex),
          ~_TouchRippleProps?,
          ~_type?,
          ~classes=?Js.Option.map((. v) => Classes.to_obj(v), classes),
          ~style?,
          (),
        ),
      children,
    );
};

module StepContent = {
  [@bs.deriving jsConverter]
  type orientation = [
    | [@bs.as "horizontal"] `Horizontal
    | [@bs.as "vertical"] `Vertical
  ];
  [@bs.deriving jsConverter]
  type transitionDurationShape = {
    enter: int,
    exit: int,
  };
  [@bs.deriving jsConverter]
  type transitionDuration = [ | [@bs.as "auto"] `Auto];
  module Classes = {
    type classesType =
      | Root(string)
      | Last(string)
      | Transition(string);
    type t = list(classesType);
    let to_string =
      fun
      | Root(_) => "root"
      | Last(_) => "last"
      | Transition(_) => "transition";
    let to_obj = listOfClasses =>
      listOfClasses
      |> StdLabels.List.fold_left(
           ~f=
             (obj, classType) => {
               switch (classType) {
               | Root(className)
               | Last(className)
               | Transition(className) =>
                 Js.Dict.set(obj, to_string(classType), className)
               };
               obj;
             },
           ~init=Js.Dict.empty(),
         );
  };
  [@bs.module "material-ui/Stepper/StepContent"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~active: bool=?,
      ~alternativeLabel: bool=?,
      ~className: string=?,
      ~completed: bool=?,
      ~last: bool=?,
      ~optional: bool=?,
      ~orientation: string=?,
      ~transition: ReasonReact.reactElement=?,
      ~transitionDuration: 'union_d=?,
      ~classes: Js.Dict.t(string)=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~active: option(bool)=?,
        ~alternativeLabel: option(bool)=?,
        ~className: option(string)=?,
        ~completed: option(bool)=?,
        ~last: option(bool)=?,
        ~optional: option(bool)=?,
        ~orientation: option(orientation)=?,
        ~transition: option(ReasonReact.reactElement)=?,
        ~transitionDuration:
           option(
             [
               | `Int(int)
               | `Float(float)
               | `Object(transitionDurationShape)
               | `Enum(transitionDuration)
             ],
           )=?,
        ~classes: option(Classes.t)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~active?,
          ~alternativeLabel?,
          ~className?,
          ~completed?,
          ~last?,
          ~optional?,
          ~orientation=?
            Js.Option.map((. v) => orientationToJs(v), orientation),
          ~transition?,
          ~transitionDuration=?
            Js.Option.map(
              (. v) =>
                switch (v) {
                | `Enum(v) =>
                  unwrapValue(`String(transitionDurationToJs(v)))
                | `Object(v) =>
                  unwrapValue(`Element(transitionDurationShapeToJs(v)))
                | v => unwrapValue(v)
                },
              transitionDuration,
            ),
          ~classes=?Js.Option.map((. v) => Classes.to_obj(v), classes),
          ~style?,
          (),
        ),
      children,
    );
};

module StepIcon = {
  module Classes = {
    type classesType =
      | Root(string)
      | Active(string)
      | Completed(string)
      | Error(string);
    type t = list(classesType);
    let to_string =
      fun
      | Root(_) => "root"
      | Active(_) => "active"
      | Completed(_) => "completed"
      | Error(_) => "error";
    let to_obj = listOfClasses =>
      listOfClasses
      |> StdLabels.List.fold_left(
           ~f=
             (obj, classType) => {
               switch (classType) {
               | Root(className)
               | Active(className)
               | Completed(className)
               | Error(className) =>
                 Js.Dict.set(obj, to_string(classType), className)
               };
               obj;
             },
           ~init=Js.Dict.empty(),
         );
  };
  [@bs.module "material-ui/Stepper/StepIcon"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~active: bool=?,
      ~completed: bool=?,
      ~error: bool=?,
      ~icon: ReasonReact.reactElement,
      ~classes: Js.Dict.t(string)=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~active: option(bool)=?,
        ~completed: option(bool)=?,
        ~error: option(bool)=?,
        ~icon: ReasonReact.reactElement,
        ~classes: option(Classes.t)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~active?,
          ~completed?,
          ~error?,
          ~icon,
          ~classes=?Js.Option.map((. v) => Classes.to_obj(v), classes),
          ~style?,
          (),
        ),
      children,
    );
};

module StepLabel = {
  [@bs.deriving jsConverter]
  type orientation = [
    | [@bs.as "horizontal"] `Horizontal
    | [@bs.as "vertical"] `Vertical
  ];
  module Classes = {
    type classesType =
      | Root(string)
      | Horizontal(string)
      | Vertical(string)
      | AlternativeLabel(string)
      | Disabled(string)
      | Error(string)
      | Label(string)
      | LabelActive(string)
      | LabelCompleted(string)
      | LabelAlternativeLabel(string)
      | LabelError(string)
      | IconContainer(string)
      | IconContainerAlternativeLabel(string)
      | LabelContainer(string);
    type t = list(classesType);
    let to_string =
      fun
      | Root(_) => "root"
      | Horizontal(_) => "horizontal"
      | Vertical(_) => "vertical"
      | AlternativeLabel(_) => "alternativeLabel"
      | Disabled(_) => "disabled"
      | Error(_) => "error"
      | Label(_) => "label"
      | LabelActive(_) => "labelActive"
      | LabelCompleted(_) => "labelCompleted"
      | LabelAlternativeLabel(_) => "labelAlternativeLabel"
      | LabelError(_) => "labelError"
      | IconContainer(_) => "iconContainer"
      | IconContainerAlternativeLabel(_) => "iconContainerAlternativeLabel"
      | LabelContainer(_) => "labelContainer";
    let to_obj = listOfClasses =>
      listOfClasses
      |> StdLabels.List.fold_left(
           ~f=
             (obj, classType) => {
               switch (classType) {
               | Root(className)
               | Horizontal(className)
               | Vertical(className)
               | AlternativeLabel(className)
               | Disabled(className)
               | Error(className)
               | Label(className)
               | LabelActive(className)
               | LabelCompleted(className)
               | LabelAlternativeLabel(className)
               | LabelError(className)
               | IconContainer(className)
               | IconContainerAlternativeLabel(className)
               | LabelContainer(className) =>
                 Js.Dict.set(obj, to_string(classType), className)
               };
               obj;
             },
           ~init=Js.Dict.empty(),
         );
  };
  [@bs.module "material-ui/Stepper/StepLabel"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~active: bool=?,
      ~alternativeLabel: bool=?,
      ~className: string=?,
      ~completed: bool=?,
      ~disabled: bool=?,
      ~error: bool=?,
      ~icon: ReasonReact.reactElement=?,
      ~last: bool=?,
      ~optional: ReasonReact.reactElement=?,
      ~orientation: string=?,
      ~classes: Js.Dict.t(string)=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~active: option(bool)=?,
        ~alternativeLabel: option(bool)=?,
        ~className: option(string)=?,
        ~completed: option(bool)=?,
        ~disabled: option(bool)=?,
        ~error: option(bool)=?,
        ~icon: option(ReasonReact.reactElement)=?,
        ~last: option(bool)=?,
        ~optional: option(ReasonReact.reactElement)=?,
        ~orientation: option(orientation)=?,
        ~classes: option(Classes.t)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~active?,
          ~alternativeLabel?,
          ~className?,
          ~completed?,
          ~disabled?,
          ~error?,
          ~icon?,
          ~last?,
          ~optional?,
          ~orientation=?
            Js.Option.map((. v) => orientationToJs(v), orientation),
          ~classes=?Js.Option.map((. v) => Classes.to_obj(v), classes),
          ~style?,
          (),
        ),
      children,
    );
};

module Step = {
  [@bs.deriving jsConverter]
  type orientation = [
    | [@bs.as "horizontal"] `Horizontal
    | [@bs.as "vertical"] `Vertical
  ];
  module Classes = {
    type classesType =
      | Root(string)
      | Horizontal(string)
      | Vertical(string)
      | AlternativeLabel(string);
    type t = list(classesType);
    let to_string =
      fun
      | Root(_) => "root"
      | Horizontal(_) => "horizontal"
      | Vertical(_) => "vertical"
      | AlternativeLabel(_) => "alternativeLabel";
    let to_obj = listOfClasses =>
      listOfClasses
      |> StdLabels.List.fold_left(
           ~f=
             (obj, classType) => {
               switch (classType) {
               | Root(className)
               | Horizontal(className)
               | Vertical(className)
               | AlternativeLabel(className) =>
                 Js.Dict.set(obj, to_string(classType), className)
               };
               obj;
             },
           ~init=Js.Dict.empty(),
         );
  };
  [@bs.module "material-ui/Stepper/Step"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~active: bool=?,
      ~alternativeLabel: bool=?,
      ~className: string=?,
      ~completed: bool=?,
      ~connector: ReasonReact.reactElement=?,
      ~disabled: bool=?,
      ~index: 'number_t=?,
      ~last: bool=?,
      ~orientation: string=?,
      ~classes: Js.Dict.t(string)=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~active: option(bool)=?,
        ~alternativeLabel: option(bool)=?,
        ~className: option(string)=?,
        ~completed: option(bool)=?,
        ~connector: option(ReasonReact.reactElement)=?,
        ~disabled: option(bool)=?,
        ~index: option([ | `Int(int) | `Float(float)])=?,
        ~last: option(bool)=?,
        ~orientation: option(orientation)=?,
        ~classes: option(Classes.t)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~active?,
          ~alternativeLabel?,
          ~className?,
          ~completed?,
          ~connector?,
          ~disabled?,
          ~index=?Js.Option.map((. v) => unwrapValue(v), index),
          ~last?,
          ~orientation=?
            Js.Option.map((. v) => orientationToJs(v), orientation),
          ~classes=?Js.Option.map((. v) => Classes.to_obj(v), classes),
          ~style?,
          (),
        ),
      children,
    );
};

module Stepper = {
  [@bs.deriving jsConverter]
  type orientation = [
    | [@bs.as "horizontal"] `Horizontal
    | [@bs.as "vertical"] `Vertical
  ];
  module Classes = {
    type classesType =
      | Root(string)
      | Horizontal(string)
      | Vertical(string)
      | AlternativeLabel(string);
    type t = list(classesType);
    let to_string =
      fun
      | Root(_) => "root"
      | Horizontal(_) => "horizontal"
      | Vertical(_) => "vertical"
      | AlternativeLabel(_) => "alternativeLabel";
    let to_obj = listOfClasses =>
      listOfClasses
      |> StdLabels.List.fold_left(
           ~f=
             (obj, classType) => {
               switch (classType) {
               | Root(className)
               | Horizontal(className)
               | Vertical(className)
               | AlternativeLabel(className) =>
                 Js.Dict.set(obj, to_string(classType), className)
               };
               obj;
             },
           ~init=Js.Dict.empty(),
         );
  };
  [@bs.module "material-ui/Stepper/Stepper"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~activeStep: 'number_2=?,
      ~alternativeLabel: bool=?,
      ~className: string=?,
      ~connector: ReasonReact.reactElement=?,
      ~nonLinear: bool=?,
      ~orientation: string=?,
      ~component: 'union_h=?,
      ~elevation: 'number_j=?,
      ~square: bool=?,
      ~classes: Js.Dict.t(string)=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~activeStep: option([ | `Int(int) | `Float(float)])=?,
        ~alternativeLabel: option(bool)=?,
        ~className: option(string)=?,
        ~connector: option(ReasonReact.reactElement)=?,
        ~nonLinear: option(bool)=?,
        ~orientation: option(orientation)=?,
        ~component:
           option([ | `String(string) | `Element(ReasonReact.reactElement)])=?,
        ~elevation: option([ | `Int(int) | `Float(float)])=?,
        ~square: option(bool)=?,
        ~classes: option(Classes.t)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~activeStep=?Js.Option.map((. v) => unwrapValue(v), activeStep),
          ~alternativeLabel?,
          ~className?,
          ~connector?,
          ~nonLinear?,
          ~orientation=?
            Js.Option.map((. v) => orientationToJs(v), orientation),
          ~component=?Js.Option.map((. v) => unwrapValue(v), component),
          ~elevation=?Js.Option.map((. v) => unwrapValue(v), elevation),
          ~square?,
          ~classes=?Js.Option.map((. v) => Classes.to_obj(v), classes),
          ~style?,
          (),
        ),
      children,
    );
};

module SvgIcon = {
  [@bs.deriving jsConverter]
  type color = [
    | [@bs.as "action"] `Action
    | [@bs.as "disabled"] `Disabled
    | [@bs.as "error"] `Error
    | [@bs.as "inherit"] `Inherit
    | [@bs.as "primary"] `Primary
    | [@bs.as "secondary"] `Secondary
  ];
  module Classes = {
    type classesType =
      | Root(string)
      | ColorPrimary(string)
      | ColorSecondary(string)
      | ColorAction(string)
      | ColorDisabled(string)
      | ColorError(string);
    type t = list(classesType);
    let to_string =
      fun
      | Root(_) => "root"
      | ColorPrimary(_) => "colorPrimary"
      | ColorSecondary(_) => "colorSecondary"
      | ColorAction(_) => "colorAction"
      | ColorDisabled(_) => "colorDisabled"
      | ColorError(_) => "colorError";
    let to_obj = listOfClasses =>
      listOfClasses
      |> StdLabels.List.fold_left(
           ~f=
             (obj, classType) => {
               switch (classType) {
               | Root(className)
               | ColorPrimary(className)
               | ColorSecondary(className)
               | ColorAction(className)
               | ColorDisabled(className)
               | ColorError(className) =>
                 Js.Dict.set(obj, to_string(classType), className)
               };
               obj;
             },
           ~init=Js.Dict.empty(),
         );
  };
  [@bs.module "material-ui/SvgIcon/SvgIcon"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~className: string=?,
      ~color: string=?,
      ~nativeColor: string=?,
      ~titleAccess: string=?,
      ~viewBox: string=?,
      ~classes: Js.Dict.t(string)=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~className: option(string)=?,
        ~color: option(color)=?,
        ~nativeColor: option(string)=?,
        ~titleAccess: option(string)=?,
        ~viewBox: option(string)=?,
        ~classes: option(Classes.t)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~className?,
          ~color=?Js.Option.map((. v) => colorToJs(v), color),
          ~nativeColor?,
          ~titleAccess?,
          ~viewBox?,
          ~classes=?Js.Option.map((. v) => Classes.to_obj(v), classes),
          ~style?,
          (),
        ),
      children,
    );
};

module SwipeableDrawer = {
  [@bs.deriving jsConverter]
  type anchor = [
    | [@bs.as "left"] `Left
    | [@bs.as "top"] `Top
    | [@bs.as "right"] `Right
    | [@bs.as "bottom"] `Bottom
  ];
  [@bs.deriving jsConverter]
  type transitionDurationShape = {
    enter: int,
    exit: int,
  };
  [@bs.deriving jsConverter]
  type variant = [
    | [@bs.as "permanent"] `Permanent
    | [@bs.as "persistent"] `Persistent
    | [@bs.as "temporary"] `Temporary
  ];
  [@bs.module "material-ui/SwipeableDrawer/SwipeableDrawer"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~anchor: string=?,
      ~disableBackdropTransition: bool=?,
      ~disableDiscovery: bool=?,
      ~disableSwipeToOpen: bool=?,
      ~_ModalProps: Js.t({..})=?,
      ~onClose: unit => unit,
      ~onOpen: unit => unit,
      ~_open: bool,
      ~_PaperProps: Js.t({..})=?,
      ~swipeAreaWidth: 'number_o=?,
      ~theme: Js.t({..}),
      ~transitionDuration: 'union_q=?,
      ~variant: string=?,
      ~className: string=?,
      ~elevation: 'number_p=?,
      ~_SlideProps: Js.t({..})=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~anchor: option(anchor)=?,
        ~disableBackdropTransition: option(bool)=?,
        ~disableDiscovery: option(bool)=?,
        ~disableSwipeToOpen: option(bool)=?,
        ~_ModalProps: option(Js.t({..}))=?,
        ~onClose: unit => unit,
        ~onOpen: unit => unit,
        ~_open: bool,
        ~_PaperProps: option(Js.t({..}))=?,
        ~swipeAreaWidth: option([ | `Int(int) | `Float(float)])=?,
        ~theme: Js.t({..}),
        ~transitionDuration:
           option(
             [
               | `Int(int)
               | `Float(float)
               | `Object(transitionDurationShape)
             ],
           )=?,
        ~variant: option(variant)=?,
        ~className: option(string)=?,
        ~elevation: option([ | `Int(int) | `Float(float)])=?,
        ~_SlideProps: option(Js.t({..}))=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~anchor=?Js.Option.map((. v) => anchorToJs(v), anchor),
          ~disableBackdropTransition?,
          ~disableDiscovery?,
          ~disableSwipeToOpen?,
          ~_ModalProps?,
          ~onClose,
          ~onOpen,
          ~_open,
          ~_PaperProps?,
          ~swipeAreaWidth=?
            Js.Option.map((. v) => unwrapValue(v), swipeAreaWidth),
          ~theme,
          ~transitionDuration=?
            Js.Option.map(
              (. v) =>
                switch (v) {
                | `Object(v) =>
                  unwrapValue(`Element(transitionDurationShapeToJs(v)))
                | v => unwrapValue(v)
                },
              transitionDuration,
            ),
          ~variant=?Js.Option.map((. v) => variantToJs(v), variant),
          ~className?,
          ~elevation=?Js.Option.map((. v) => unwrapValue(v), elevation),
          ~_SlideProps?,
          ~style?,
          (),
        ),
      children,
    );
};

module Switch = {
  [@bs.deriving jsConverter]
  type color = [
    | [@bs.as "primary"] `Primary
    | [@bs.as "secondary"] `Secondary
    | [@bs.as "default"] `Default
  ];
  module Classes = {
    type classesType =
      | Root(string)
      | Bar(string)
      | Icon(string)
      | IconChecked(string)
      | Default(string)
      | Checked(string)
      | CheckedPrimary(string)
      | CheckedSecondary(string)
      | Disabled(string);
    type t = list(classesType);
    let to_string =
      fun
      | Root(_) => "root"
      | Bar(_) => "bar"
      | Icon(_) => "icon"
      | IconChecked(_) => "iconChecked"
      | Default(_) => "default"
      | Checked(_) => "checked"
      | CheckedPrimary(_) => "checkedPrimary"
      | CheckedSecondary(_) => "checkedSecondary"
      | Disabled(_) => "disabled";
    let to_obj = listOfClasses =>
      listOfClasses
      |> StdLabels.List.fold_left(
           ~f=
             (obj, classType) => {
               switch (classType) {
               | Root(className)
               | Bar(className)
               | Icon(className)
               | IconChecked(className)
               | Default(className)
               | Checked(className)
               | CheckedPrimary(className)
               | CheckedSecondary(className)
               | Disabled(className) =>
                 Js.Dict.set(obj, to_string(classType), className)
               };
               obj;
             },
           ~init=Js.Dict.empty(),
         );
  };
  [@bs.module "material-ui/Switch/Switch"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~checked: 'union_v=?,
      ~checkedIcon: ReasonReact.reactElement=?,
      ~className: string=?,
      ~color: string=?,
      ~defaultChecked: bool=?,
      ~disabled: bool=?,
      ~disableRipple: bool=?,
      ~icon: ReasonReact.reactElement=?,
      ~id: string=?,
      ~inputProps: Js.t({..})=?,
      ~inputRef: ReasonReact.reactElement=?,
      ~onChange: ReactEventRe.Form.t => unit=?,
      ~_type: string=?,
      ~value: string=?,
      ~classes: Js.Dict.t(string)=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~checked: option([ | `Bool(bool) | `String(string)])=?,
        ~checkedIcon: option(ReasonReact.reactElement)=?,
        ~className: option(string)=?,
        ~color: option(color)=?,
        ~defaultChecked: option(bool)=?,
        ~disabled: option(bool)=?,
        ~disableRipple: option(bool)=?,
        ~icon: option(ReasonReact.reactElement)=?,
        ~id: option(string)=?,
        ~inputProps: option(Js.t({..}))=?,
        ~inputRef: option(ReasonReact.reactElement)=?,
        ~onChange: option(ReactEventRe.Form.t => unit)=?,
        ~_type: option(string)=?,
        ~value: option(string)=?,
        ~classes: option(Classes.t)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~checked=?Js.Option.map((. v) => unwrapValue(v), checked),
          ~checkedIcon?,
          ~className?,
          ~color=?Js.Option.map((. v) => colorToJs(v), color),
          ~defaultChecked?,
          ~disabled?,
          ~disableRipple?,
          ~icon?,
          ~id?,
          ~inputProps?,
          ~inputRef?,
          ~onChange?,
          ~_type?,
          ~value?,
          ~classes=?Js.Option.map((. v) => Classes.to_obj(v), classes),
          ~style?,
          (),
        ),
      children,
    );
};

module Tab = {
  [@bs.deriving jsConverter]
  type textColor = [
    | [@bs.as "secondary"] `Secondary
    | [@bs.as "primary"] `Primary
    | [@bs.as "inherit"] `Inherit
  ];
  module Classes = {
    type classesType =
      | Root(string)
      | LabelIcon(string)
      | TextColorInherit(string)
      | TextColorPrimary(string)
      | TextColorPrimarySelected(string)
      | TextColorPrimaryDisabled(string)
      | TextColorSecondary(string)
      | TextColorSecondarySelected(string)
      | TextColorSecondaryDisabled(string)
      | TextColorInheritSelected(string)
      | TextColorInheritDisabled(string)
      | FullWidth(string)
      | Wrapper(string)
      | LabelContainer(string)
      | Label(string)
      | LabelWrapped(string);
    type t = list(classesType);
    let to_string =
      fun
      | Root(_) => "root"
      | LabelIcon(_) => "labelIcon"
      | TextColorInherit(_) => "textColorInherit"
      | TextColorPrimary(_) => "textColorPrimary"
      | TextColorPrimarySelected(_) => "textColorPrimarySelected"
      | TextColorPrimaryDisabled(_) => "textColorPrimaryDisabled"
      | TextColorSecondary(_) => "textColorSecondary"
      | TextColorSecondarySelected(_) => "textColorSecondarySelected"
      | TextColorSecondaryDisabled(_) => "textColorSecondaryDisabled"
      | TextColorInheritSelected(_) => "textColorInheritSelected"
      | TextColorInheritDisabled(_) => "textColorInheritDisabled"
      | FullWidth(_) => "fullWidth"
      | Wrapper(_) => "wrapper"
      | LabelContainer(_) => "labelContainer"
      | Label(_) => "label"
      | LabelWrapped(_) => "labelWrapped";
    let to_obj = listOfClasses =>
      listOfClasses
      |> StdLabels.List.fold_left(
           ~f=
             (obj, classType) => {
               switch (classType) {
               | Root(className)
               | LabelIcon(className)
               | TextColorInherit(className)
               | TextColorPrimary(className)
               | TextColorPrimarySelected(className)
               | TextColorPrimaryDisabled(className)
               | TextColorSecondary(className)
               | TextColorSecondarySelected(className)
               | TextColorSecondaryDisabled(className)
               | TextColorInheritSelected(className)
               | TextColorInheritDisabled(className)
               | FullWidth(className)
               | Wrapper(className)
               | LabelContainer(className)
               | Label(className)
               | LabelWrapped(className) =>
                 Js.Dict.set(obj, to_string(classType), className)
               };
               obj;
             },
           ~init=Js.Dict.empty(),
         );
  };
  [@bs.module "material-ui/Tabs/Tab"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~className: string=?,
      ~disabled: bool=?,
      ~fullWidth: bool=?,
      ~icon: ReasonReact.reactElement=?,
      ~indicator: ReasonReact.reactElement=?,
      ~label: ReasonReact.reactElement=?,
      ~onChange: ReactEventRe.Form.t => unit=?,
      ~onClick: ReactEventRe.Mouse.t => unit=?,
      ~selected: bool=?,
      ~textColor: 'union_q=?,
      ~value: 'any_0=?,
      ~buttonRef: ReasonReact.reactElement=?,
      ~centerRipple: bool=?,
      ~component: 'union_0=?,
      ~disableRipple: bool=?,
      ~focusRipple: bool=?,
      ~onBlur: ReactEventRe.Focus.t => unit=?,
      ~onFocus: ReactEventRe.Focus.t => unit=?,
      ~onKeyboardFocus: ReactEventRe.Focus.t => unit=?,
      ~onKeyDown: ReactEventRe.Keyboard.t => unit=?,
      ~onKeyUp: ReactEventRe.Keyboard.t => unit=?,
      ~onMouseDown: ReactEventRe.Mouse.t => unit=?,
      ~onMouseLeave: ReactEventRe.Mouse.t => unit=?,
      ~onMouseUp: ReactEventRe.Mouse.t => unit=?,
      ~onTouchEnd: ReactEventRe.Touch.t => unit=?,
      ~onTouchMove: ReactEventRe.Touch.t => unit=?,
      ~onTouchStart: ReactEventRe.Touch.t => unit=?,
      ~role: string=?,
      ~tabIndex: 'union_o=?,
      ~_TouchRippleProps: Js.t({..})=?,
      ~_type: string=?,
      ~classes: Js.Dict.t(string)=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~className: option(string)=?,
        ~disabled: option(bool)=?,
        ~fullWidth: option(bool)=?,
        ~icon: option(ReasonReact.reactElement)=?,
        ~indicator: option(ReasonReact.reactElement)=?,
        ~label: option(ReasonReact.reactElement)=?,
        ~onChange: option(ReactEventRe.Form.t => unit)=?,
        ~onClick: option(ReactEventRe.Mouse.t => unit)=?,
        ~selected: option(bool)=?,
        ~textColor: option([ | `String(string) | `Enum(textColor)])=?,
        ~value: option('any_0)=?,
        ~buttonRef: option(ReasonReact.reactElement)=?,
        ~centerRipple: option(bool)=?,
        ~component:
           option([ | `String(string) | `Element(ReasonReact.reactElement)])=?,
        ~disableRipple: option(bool)=?,
        ~focusRipple: option(bool)=?,
        ~onBlur: option(ReactEventRe.Focus.t => unit)=?,
        ~onFocus: option(ReactEventRe.Focus.t => unit)=?,
        ~onKeyboardFocus: option(ReactEventRe.Focus.t => unit)=?,
        ~onKeyDown: option(ReactEventRe.Keyboard.t => unit)=?,
        ~onKeyUp: option(ReactEventRe.Keyboard.t => unit)=?,
        ~onMouseDown: option(ReactEventRe.Mouse.t => unit)=?,
        ~onMouseLeave: option(ReactEventRe.Mouse.t => unit)=?,
        ~onMouseUp: option(ReactEventRe.Mouse.t => unit)=?,
        ~onTouchEnd: option(ReactEventRe.Touch.t => unit)=?,
        ~onTouchMove: option(ReactEventRe.Touch.t => unit)=?,
        ~onTouchStart: option(ReactEventRe.Touch.t => unit)=?,
        ~role: option(string)=?,
        ~tabIndex: option([ | `Int(int) | `Float(float) | `String(string)])=?,
        ~_TouchRippleProps: option(Js.t({..}))=?,
        ~_type: option(string)=?,
        ~classes: option(Classes.t)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~className?,
          ~disabled?,
          ~fullWidth?,
          ~icon?,
          ~indicator?,
          ~label?,
          ~onChange?,
          ~onClick?,
          ~selected?,
          ~textColor=?
            Js.Option.map(
              (. v) =>
                switch (v) {
                | `Enum(v) => unwrapValue(`String(textColorToJs(v)))
                | v => unwrapValue(v)
                },
              textColor,
            ),
          ~value?,
          ~buttonRef?,
          ~centerRipple?,
          ~component=?Js.Option.map((. v) => unwrapValue(v), component),
          ~disableRipple?,
          ~focusRipple?,
          ~onBlur?,
          ~onFocus?,
          ~onKeyboardFocus?,
          ~onKeyDown?,
          ~onKeyUp?,
          ~onMouseDown?,
          ~onMouseLeave?,
          ~onMouseUp?,
          ~onTouchEnd?,
          ~onTouchMove?,
          ~onTouchStart?,
          ~role?,
          ~tabIndex=?Js.Option.map((. v) => unwrapValue(v), tabIndex),
          ~_TouchRippleProps?,
          ~_type?,
          ~classes=?Js.Option.map((. v) => Classes.to_obj(v), classes),
          ~style?,
          (),
        ),
      children,
    );
};

module TableBody = {
  [@bs.module "material-ui/Table/TableBody"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~className: string=?,
      ~component: 'union_z=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~className: option(string)=?,
        ~component:
           option([ | `String(string) | `Element(ReasonReact.reactElement)])=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~className?,
          ~component=?Js.Option.map((. v) => unwrapValue(v), component),
          ~style?,
          (),
        ),
      children,
    );
};

module TableCell = {
  [@bs.deriving jsConverter]
  type padding = [
    | [@bs.as "default"] `Default
    | [@bs.as "checkbox"] `Checkbox
    | [@bs.as "dense"] `Dense
    | [@bs.as "none"] `None
  ];
  [@bs.deriving jsConverter]
  type sortDirection = [
    | [@bs.as "asc"] `Asc
    | [@bs.as "desc"] `Desc
    | [@bs.as "0"] `False
  ];
  [@bs.deriving jsConverter]
  type variant = [
    | [@bs.as "head"] `Head
    | [@bs.as "body"] `Body
    | [@bs.as "footer"] `Footer
  ];
  module Classes = {
    type classesType =
      | Root(string)
      | Head(string)
      | Body(string)
      | Footer(string)
      | Numeric(string)
      | PaddingDense(string)
      | PaddingCheckbox(string)
      | PaddingNone(string);
    type t = list(classesType);
    let to_string =
      fun
      | Root(_) => "root"
      | Head(_) => "head"
      | Body(_) => "body"
      | Footer(_) => "footer"
      | Numeric(_) => "numeric"
      | PaddingDense(_) => "paddingDense"
      | PaddingCheckbox(_) => "paddingCheckbox"
      | PaddingNone(_) => "paddingNone";
    let to_obj = listOfClasses =>
      listOfClasses
      |> StdLabels.List.fold_left(
           ~f=
             (obj, classType) => {
               switch (classType) {
               | Root(className)
               | Head(className)
               | Body(className)
               | Footer(className)
               | Numeric(className)
               | PaddingDense(className)
               | PaddingCheckbox(className)
               | PaddingNone(className) =>
                 Js.Dict.set(obj, to_string(classType), className)
               };
               obj;
             },
           ~init=Js.Dict.empty(),
         );
  };
  [@bs.module "material-ui/Table/TableCell"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~className: string=?,
      ~component: 'union_s=?,
      ~numeric: bool=?,
      ~padding: string=?,
      ~scope: string=?,
      ~sortDirection: string=?,
      ~variant: string=?,
      ~colSpan: 'number_p=?,
      ~classes: Js.Dict.t(string)=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~className: option(string)=?,
        ~component:
           option([ | `String(string) | `Element(ReasonReact.reactElement)])=?,
        ~numeric: option(bool)=?,
        ~padding: option(padding)=?,
        ~scope: option(string)=?,
        ~sortDirection: option(sortDirection)=?,
        ~variant: option(variant)=?,
        ~colSpan: option([ | `Int(int) | `Float(float)])=?,
        ~classes: option(Classes.t)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~className?,
          ~component=?Js.Option.map((. v) => unwrapValue(v), component),
          ~numeric?,
          ~padding=?Js.Option.map((. v) => paddingToJs(v), padding),
          ~scope?,
          ~sortDirection=?
            Js.Option.map((. v) => sortDirectionToJs(v), sortDirection),
          ~variant=?Js.Option.map((. v) => variantToJs(v), variant),
          ~colSpan=?Js.Option.map((. v) => unwrapValue(v), colSpan),
          ~classes=?Js.Option.map((. v) => Classes.to_obj(v), classes),
          ~style?,
          (),
        ),
      children,
    );
};

module TableFooter = {
  [@bs.module "material-ui/Table/TableFooter"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (~component: 'union_m=?, ~style: ReactDOMRe.style=?, unit) => _ =
    "";
  let make =
      (
        ~component:
           option([ | `String(string) | `Element(ReasonReact.reactElement)])=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~component=?Js.Option.map((. v) => unwrapValue(v), component),
          ~style?,
          (),
        ),
      children,
    );
};

module TableHead = {
  [@bs.module "material-ui/Table/TableHead"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~className: string=?,
      ~component: 'union_l=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~className: option(string)=?,
        ~component:
           option([ | `String(string) | `Element(ReasonReact.reactElement)])=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~className?,
          ~component=?Js.Option.map((. v) => unwrapValue(v), component),
          ~style?,
          (),
        ),
      children,
    );
};

module TablePagination = {
  [@bs.deriving jsConverter]
  type padding = [
    | [@bs.as "default"] `Default
    | [@bs.as "checkbox"] `Checkbox
    | [@bs.as "dense"] `Dense
    | [@bs.as "none"] `None
  ];
  [@bs.deriving jsConverter]
  type sortDirection = [
    | [@bs.as "asc"] `Asc
    | [@bs.as "desc"] `Desc
    | [@bs.as "0"] `False
  ];
  [@bs.deriving jsConverter]
  type variant = [
    | [@bs.as "head"] `Head
    | [@bs.as "body"] `Body
    | [@bs.as "footer"] `Footer
  ];
  module Classes = {
    type classesType =
      | Root(string)
      | Toolbar(string)
      | Spacer(string)
      | Caption(string)
      | Input(string)
      | SelectRoot(string)
      | Select(string)
      | SelectIcon(string)
      | Actions(string);
    type t = list(classesType);
    let to_string =
      fun
      | Root(_) => "root"
      | Toolbar(_) => "toolbar"
      | Spacer(_) => "spacer"
      | Caption(_) => "caption"
      | Input(_) => "input"
      | SelectRoot(_) => "selectRoot"
      | Select(_) => "select"
      | SelectIcon(_) => "selectIcon"
      | Actions(_) => "actions";
    let to_obj = listOfClasses =>
      listOfClasses
      |> StdLabels.List.fold_left(
           ~f=
             (obj, classType) => {
               switch (classType) {
               | Root(className)
               | Toolbar(className)
               | Spacer(className)
               | Caption(className)
               | Input(className)
               | SelectRoot(className)
               | Select(className)
               | SelectIcon(className)
               | Actions(className) =>
                 Js.Dict.set(obj, to_string(classType), className)
               };
               obj;
             },
           ~init=Js.Dict.empty(),
         );
  };
  [@bs.module "material-ui/Table/TablePagination"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~_Actions: 'union_r=?,
      ~backIconButtonProps: Js.t({..})=?,
      ~colSpan: 'number_g=?,
      ~component: 'union_h=?,
      ~count: 'number_q,
      ~labelDisplayedRows: {
                             .
                             "from": int,
                             "_to": int,
                             "count": int,
                           } =>
                           string
                             =?,
      ~labelRowsPerPage: ReasonReact.reactElement=?,
      ~nextIconButtonProps: Js.t({..})=?,
      ~onChangePage: (Js.Nullable.t(ReactEventRe.Synthetic.t), int) => unit,
      ~onChangeRowsPerPage: ReactEventRe.Form.t => unit=?,
      ~page: 'number_8,
      ~rowsPerPage: 'number_f,
      ~rowsPerPageOptions: 'arrayGeneric_m=?,
      ~_SelectProps: Js.t({..})=?,
      ~className: string=?,
      ~numeric: bool=?,
      ~padding: string=?,
      ~scope: string=?,
      ~sortDirection: string=?,
      ~variant: string=?,
      ~classes: Js.Dict.t(string)=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~_Actions:
           option([ | `String(string) | `Element(ReasonReact.reactElement)])=?,
        ~backIconButtonProps: option(Js.t({..}))=?,
        ~colSpan: option([ | `Int(int) | `Float(float)])=?,
        ~component:
           option([ | `String(string) | `Element(ReasonReact.reactElement)])=?,
        ~count: [ | `Int(int) | `Float(float)],
        ~labelDisplayedRows:
           option(
             {
               .
               "from": int,
               "_to": int,
               "count": int,
             } =>
             string,
           )=?,
        ~labelRowsPerPage: option(ReasonReact.reactElement)=?,
        ~nextIconButtonProps: option(Js.t({..}))=?,
        ~onChangePage: (Js.Nullable.t(ReactEventRe.Synthetic.t), int) => unit,
        ~onChangeRowsPerPage: option(ReactEventRe.Form.t => unit)=?,
        ~page: [ | `Int(int) | `Float(float)],
        ~rowsPerPage: [ | `Int(int) | `Float(float)],
        ~rowsPerPageOptions: option(array(int))=?,
        ~_SelectProps: option(Js.t({..}))=?,
        ~className: option(string)=?,
        ~numeric: option(bool)=?,
        ~padding: option(padding)=?,
        ~scope: option(string)=?,
        ~sortDirection: option(sortDirection)=?,
        ~variant: option(variant)=?,
        ~classes: option(Classes.t)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~_Actions=?Js.Option.map((. v) => unwrapValue(v), _Actions),
          ~backIconButtonProps?,
          ~colSpan=?Js.Option.map((. v) => unwrapValue(v), colSpan),
          ~component=?Js.Option.map((. v) => unwrapValue(v), component),
          ~count=unwrapValue(count),
          ~labelDisplayedRows?,
          ~labelRowsPerPage?,
          ~nextIconButtonProps?,
          ~onChangePage,
          ~onChangeRowsPerPage?,
          ~page=unwrapValue(page),
          ~rowsPerPage=unwrapValue(rowsPerPage),
          ~rowsPerPageOptions?,
          ~_SelectProps?,
          ~className?,
          ~numeric?,
          ~padding=?Js.Option.map((. v) => paddingToJs(v), padding),
          ~scope?,
          ~sortDirection=?
            Js.Option.map((. v) => sortDirectionToJs(v), sortDirection),
          ~variant=?Js.Option.map((. v) => variantToJs(v), variant),
          ~classes=?Js.Option.map((. v) => Classes.to_obj(v), classes),
          ~style?,
          (),
        ),
      children,
    );
};

module TableRow = {
  module Classes = {
    type classesType =
      | Root(string)
      | Head(string)
      | Footer(string)
      | Selected(string)
      | Hover(string);
    type t = list(classesType);
    let to_string =
      fun
      | Root(_) => "root"
      | Head(_) => "head"
      | Footer(_) => "footer"
      | Selected(_) => "selected"
      | Hover(_) => "hover";
    let to_obj = listOfClasses =>
      listOfClasses
      |> StdLabels.List.fold_left(
           ~f=
             (obj, classType) => {
               switch (classType) {
               | Root(className)
               | Head(className)
               | Footer(className)
               | Selected(className)
               | Hover(className) =>
                 Js.Dict.set(obj, to_string(classType), className)
               };
               obj;
             },
           ~init=Js.Dict.empty(),
         );
  };
  [@bs.module "material-ui/Table/TableRow"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~className: string=?,
      ~component: 'union_m=?,
      ~hover: bool=?,
      ~selected: bool=?,
      ~onDoubleClick: ReactEventRe.Mouse.t => unit=?,
      ~classes: Js.Dict.t(string)=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~className: option(string)=?,
        ~component:
           option([ | `String(string) | `Element(ReasonReact.reactElement)])=?,
        ~hover: option(bool)=?,
        ~selected: option(bool)=?,
        ~onDoubleClick: option(ReactEventRe.Mouse.t => unit)=?,
        ~classes: option(Classes.t)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~className?,
          ~component=?Js.Option.map((. v) => unwrapValue(v), component),
          ~hover?,
          ~selected?,
          ~onDoubleClick?,
          ~classes=?Js.Option.map((. v) => Classes.to_obj(v), classes),
          ~style?,
          (),
        ),
      children,
    );
};

module TableSortLabel = {
  [@bs.deriving jsConverter]
  type direction = [ | [@bs.as "asc"] `Asc | [@bs.as "desc"] `Desc];
  module Classes = {
    type classesType =
      | Root(string)
      | Active(string)
      | Icon(string)
      | IconDirectionDesc(string)
      | IconDirectionAsc(string);
    type t = list(classesType);
    let to_string =
      fun
      | Root(_) => "root"
      | Active(_) => "active"
      | Icon(_) => "icon"
      | IconDirectionDesc(_) => "iconDirectionDesc"
      | IconDirectionAsc(_) => "iconDirectionAsc";
    let to_obj = listOfClasses =>
      listOfClasses
      |> StdLabels.List.fold_left(
           ~f=
             (obj, classType) => {
               switch (classType) {
               | Root(className)
               | Active(className)
               | Icon(className)
               | IconDirectionDesc(className)
               | IconDirectionAsc(className) =>
                 Js.Dict.set(obj, to_string(classType), className)
               };
               obj;
             },
           ~init=Js.Dict.empty(),
         );
  };
  [@bs.module "material-ui/Table/TableSortLabel"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~active: bool=?,
      ~className: string=?,
      ~direction: string=?,
      ~buttonRef: ReasonReact.reactElement=?,
      ~centerRipple: bool=?,
      ~component: 'union_0=?,
      ~disabled: bool=?,
      ~disableRipple: bool=?,
      ~focusRipple: bool=?,
      ~onBlur: ReactEventRe.Focus.t => unit=?,
      ~onClick: ReactEventRe.Mouse.t => unit=?,
      ~onFocus: ReactEventRe.Focus.t => unit=?,
      ~onKeyboardFocus: ReactEventRe.Focus.t => unit=?,
      ~onKeyDown: ReactEventRe.Keyboard.t => unit=?,
      ~onKeyUp: ReactEventRe.Keyboard.t => unit=?,
      ~onMouseDown: ReactEventRe.Mouse.t => unit=?,
      ~onMouseLeave: ReactEventRe.Mouse.t => unit=?,
      ~onMouseUp: ReactEventRe.Mouse.t => unit=?,
      ~onTouchEnd: ReactEventRe.Touch.t => unit=?,
      ~onTouchMove: ReactEventRe.Touch.t => unit=?,
      ~onTouchStart: ReactEventRe.Touch.t => unit=?,
      ~role: string=?,
      ~tabIndex: 'union_o=?,
      ~_TouchRippleProps: Js.t({..})=?,
      ~_type: string=?,
      ~classes: Js.Dict.t(string)=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~active: option(bool)=?,
        ~className: option(string)=?,
        ~direction: option(direction)=?,
        ~buttonRef: option(ReasonReact.reactElement)=?,
        ~centerRipple: option(bool)=?,
        ~component:
           option([ | `String(string) | `Element(ReasonReact.reactElement)])=?,
        ~disabled: option(bool)=?,
        ~disableRipple: option(bool)=?,
        ~focusRipple: option(bool)=?,
        ~onBlur: option(ReactEventRe.Focus.t => unit)=?,
        ~onClick: option(ReactEventRe.Mouse.t => unit)=?,
        ~onFocus: option(ReactEventRe.Focus.t => unit)=?,
        ~onKeyboardFocus: option(ReactEventRe.Focus.t => unit)=?,
        ~onKeyDown: option(ReactEventRe.Keyboard.t => unit)=?,
        ~onKeyUp: option(ReactEventRe.Keyboard.t => unit)=?,
        ~onMouseDown: option(ReactEventRe.Mouse.t => unit)=?,
        ~onMouseLeave: option(ReactEventRe.Mouse.t => unit)=?,
        ~onMouseUp: option(ReactEventRe.Mouse.t => unit)=?,
        ~onTouchEnd: option(ReactEventRe.Touch.t => unit)=?,
        ~onTouchMove: option(ReactEventRe.Touch.t => unit)=?,
        ~onTouchStart: option(ReactEventRe.Touch.t => unit)=?,
        ~role: option(string)=?,
        ~tabIndex: option([ | `Int(int) | `Float(float) | `String(string)])=?,
        ~_TouchRippleProps: option(Js.t({..}))=?,
        ~_type: option(string)=?,
        ~classes: option(Classes.t)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~active?,
          ~className?,
          ~direction=?Js.Option.map((. v) => directionToJs(v), direction),
          ~buttonRef?,
          ~centerRipple?,
          ~component=?Js.Option.map((. v) => unwrapValue(v), component),
          ~disabled?,
          ~disableRipple?,
          ~focusRipple?,
          ~onBlur?,
          ~onClick?,
          ~onFocus?,
          ~onKeyboardFocus?,
          ~onKeyDown?,
          ~onKeyUp?,
          ~onMouseDown?,
          ~onMouseLeave?,
          ~onMouseUp?,
          ~onTouchEnd?,
          ~onTouchMove?,
          ~onTouchStart?,
          ~role?,
          ~tabIndex=?Js.Option.map((. v) => unwrapValue(v), tabIndex),
          ~_TouchRippleProps?,
          ~_type?,
          ~classes=?Js.Option.map((. v) => Classes.to_obj(v), classes),
          ~style?,
          (),
        ),
      children,
    );
};

module Table = {
  module Classes = {
    type classesType =
      | Root(string);
    type t = list(classesType);
    let to_string =
      fun
      | Root(_) => "root";
    let to_obj = listOfClasses =>
      listOfClasses
      |> StdLabels.List.fold_left(
           ~f=
             (obj, classType) => {
               switch (classType) {
               | Root(className) =>
                 Js.Dict.set(obj, to_string(classType), className)
               };
               obj;
             },
           ~init=Js.Dict.empty(),
         );
  };
  [@bs.module "material-ui/Table/Table"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~className: string=?,
      ~component: 'union_e=?,
      ~classes: Js.Dict.t(string)=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~className: option(string)=?,
        ~component:
           option([ | `String(string) | `Element(ReasonReact.reactElement)])=?,
        ~classes: option(Classes.t)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~className?,
          ~component=?Js.Option.map((. v) => unwrapValue(v), component),
          ~classes=?Js.Option.map((. v) => Classes.to_obj(v), classes),
          ~style?,
          (),
        ),
      children,
    );
};

module Tabs = {
  [@bs.deriving jsConverter]
  type indicatorColor = [
    | [@bs.as "secondary"] `Secondary
    | [@bs.as "primary"] `Primary
  ];
  [@bs.deriving jsConverter]
  type scrollButtons = [
    | [@bs.as "auto"] `Auto
    | [@bs.as "on"] `On
    | [@bs.as "off"] `Off
  ];
  [@bs.deriving jsConverter]
  type textColor = [
    | [@bs.as "secondary"] `Secondary
    | [@bs.as "primary"] `Primary
    | [@bs.as "inherit"] `Inherit
  ];
  module Classes = {
    type classesType =
      | Root(string)
      | FlexContainer(string)
      | Scroller(string)
      | Fixed(string)
      | Scrollable(string)
      | Centered(string)
      | ScrollButtons(string)
      | ScrollButtonsAuto(string)
      | Indicator(string);
    type t = list(classesType);
    let to_string =
      fun
      | Root(_) => "root"
      | FlexContainer(_) => "flexContainer"
      | Scroller(_) => "scroller"
      | Fixed(_) => "fixed"
      | Scrollable(_) => "scrollable"
      | Centered(_) => "centered"
      | ScrollButtons(_) => "scrollButtons"
      | ScrollButtonsAuto(_) => "scrollButtonsAuto"
      | Indicator(_) => "indicator";
    let to_obj = listOfClasses =>
      listOfClasses
      |> StdLabels.List.fold_left(
           ~f=
             (obj, classType) => {
               switch (classType) {
               | Root(className)
               | FlexContainer(className)
               | Scroller(className)
               | Fixed(className)
               | Scrollable(className)
               | Centered(className)
               | ScrollButtons(className)
               | ScrollButtonsAuto(className)
               | Indicator(className) =>
                 Js.Dict.set(obj, to_string(classType), className)
               };
               obj;
             },
           ~init=Js.Dict.empty(),
         );
  };
  [@bs.module "material-ui/Tabs/Tabs"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~action: ReasonReact.reactElement=?,
      ~centered: bool=?,
      ~className: string=?,
      ~fullWidth: bool=?,
      ~indicatorColor: 'union_e=?,
      ~onChange: ReactEventRe.Form.t => unit=?,
      ~scrollable: bool=?,
      ~scrollButtons: string=?,
      ~_TabScrollButton: 'union_b=?,
      ~textColor: string=?,
      ~theme: Js.t({..}),
      ~value: 'any_j=?,
      ~classes: Js.Dict.t(string)=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~action: option(ReasonReact.reactElement)=?,
        ~centered: option(bool)=?,
        ~className: option(string)=?,
        ~fullWidth: option(bool)=?,
        ~indicatorColor:
           option([ | `String(string) | `Enum(indicatorColor)])=?,
        ~onChange: option(ReactEventRe.Form.t => unit)=?,
        ~scrollable: option(bool)=?,
        ~scrollButtons: option(scrollButtons)=?,
        ~_TabScrollButton:
           option([ | `String(string) | `Element(ReasonReact.reactElement)])=?,
        ~textColor: option(textColor)=?,
        ~theme: Js.t({..}),
        ~value: option('any_j)=?,
        ~classes: option(Classes.t)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~action?,
          ~centered?,
          ~className?,
          ~fullWidth?,
          ~indicatorColor=?
            Js.Option.map(
              (. v) =>
                switch (v) {
                | `Enum(v) => unwrapValue(`String(indicatorColorToJs(v)))
                | v => unwrapValue(v)
                },
              indicatorColor,
            ),
          ~onChange?,
          ~scrollable?,
          ~scrollButtons=?
            Js.Option.map((. v) => scrollButtonsToJs(v), scrollButtons),
          ~_TabScrollButton=?
            Js.Option.map((. v) => unwrapValue(v), _TabScrollButton),
          ~textColor=?Js.Option.map((. v) => textColorToJs(v), textColor),
          ~theme,
          ~value?,
          ~classes=?Js.Option.map((. v) => Classes.to_obj(v), classes),
          ~style?,
          (),
        ),
      children,
    );
};

module TextField = {
  [@bs.deriving jsConverter]
  type margin = [
    | [@bs.as "none"] `None
    | [@bs.as "dense"] `Dense
    | [@bs.as "normal"] `Normal
  ];
  [@bs.module "material-ui/TextField/TextField"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~autoComplete: string=?,
      ~autoFocus: bool=?,
      ~className: string=?,
      ~defaultValue: 'union_e=?,
      ~disabled: bool=?,
      ~error: bool=?,
      ~_FormHelperTextProps: Js.t({..})=?,
      ~fullWidth: bool=?,
      ~helperText: ReasonReact.reactElement=?,
      ~id: string=?,
      ~_InputLabelProps: Js.t({..})=?,
      ~_InputProps: Js.t({..})=?,
      ~inputProps: Js.t({..})=?,
      ~inputRef: ReasonReact.reactElement=?,
      ~label: ReasonReact.reactElement=?,
      ~margin: string=?,
      ~multiline: bool=?,
      ~name: string=?,
      ~onBlur: ReactEventRe.Focus.t => unit=?,
      ~onChange: ReactEventRe.Form.t => unit=?,
      ~onFocus: ReactEventRe.Focus.t => unit=?,
      ~placeholder: string=?,
      ~required: bool=?,
      ~rows: 'union_r=?,
      ~rowsMax: 'union_j=?,
      ~select: bool=?,
      ~_SelectProps: Js.t({..})=?,
      ~_type: string=?,
      ~value: 'union_r=?,
      ~component: 'union_w=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~autoComplete: option(string)=?,
        ~autoFocus: option(bool)=?,
        ~className: option(string)=?,
        ~defaultValue:
           option([ | `String(string) | `Int(int) | `Float(float)])=?,
        ~disabled: option(bool)=?,
        ~error: option(bool)=?,
        ~_FormHelperTextProps: option(Js.t({..}))=?,
        ~fullWidth: option(bool)=?,
        ~helperText: option(ReasonReact.reactElement)=?,
        ~id: option(string)=?,
        ~_InputLabelProps: option(Js.t({..}))=?,
        ~_InputProps: option(Js.t({..}))=?,
        ~inputProps: option(Js.t({..}))=?,
        ~inputRef: option(ReasonReact.reactElement)=?,
        ~label: option(ReasonReact.reactElement)=?,
        ~margin: option(margin)=?,
        ~multiline: option(bool)=?,
        ~name: option(string)=?,
        ~onBlur: option(ReactEventRe.Focus.t => unit)=?,
        ~onChange: option(ReactEventRe.Form.t => unit)=?,
        ~onFocus: option(ReactEventRe.Focus.t => unit)=?,
        ~placeholder: option(string)=?,
        ~required: option(bool)=?,
        ~rows: option([ | `String(string) | `Int(int) | `Float(float)])=?,
        ~rowsMax: option([ | `String(string) | `Int(int) | `Float(float)])=?,
        ~select: option(bool)=?,
        ~_SelectProps: option(Js.t({..}))=?,
        ~_type: option(string)=?,
        ~value:
           option(
             [
               | `String(string)
               | `Int(int)
               | `Float(float)
               | `StringArray(array(string))
               | `IntArray(array(int))
               | `FloatArray(array(float))
             ],
           )=?,
        ~component:
           option([ | `String(string) | `Element(ReasonReact.reactElement)])=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~autoComplete?,
          ~autoFocus?,
          ~className?,
          ~defaultValue=?
            Js.Option.map((. v) => unwrapValue(v), defaultValue),
          ~disabled?,
          ~error?,
          ~_FormHelperTextProps?,
          ~fullWidth?,
          ~helperText?,
          ~id?,
          ~_InputLabelProps?,
          ~_InputProps?,
          ~inputProps?,
          ~inputRef?,
          ~label?,
          ~margin=?Js.Option.map((. v) => marginToJs(v), margin),
          ~multiline?,
          ~name?,
          ~onBlur?,
          ~onChange?,
          ~onFocus?,
          ~placeholder?,
          ~required?,
          ~rows=?Js.Option.map((. v) => unwrapValue(v), rows),
          ~rowsMax=?Js.Option.map((. v) => unwrapValue(v), rowsMax),
          ~select?,
          ~_SelectProps?,
          ~_type?,
          ~value=?Js.Option.map((. v) => unwrapValue(v), value),
          ~component=?Js.Option.map((. v) => unwrapValue(v), component),
          ~style?,
          (),
        ),
      children,
    );
};

module Toolbar = {
  module Classes = {
    type classesType =
      | Root(string)
      | Gutters(string);
    type t = list(classesType);
    let to_string =
      fun
      | Root(_) => "root"
      | Gutters(_) => "gutters";
    let to_obj = listOfClasses =>
      listOfClasses
      |> StdLabels.List.fold_left(
           ~f=
             (obj, classType) => {
               switch (classType) {
               | Root(className)
               | Gutters(className) =>
                 Js.Dict.set(obj, to_string(classType), className)
               };
               obj;
             },
           ~init=Js.Dict.empty(),
         );
  };
  [@bs.module "material-ui/Toolbar/Toolbar"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~className: string=?,
      ~disableGutters: bool=?,
      ~classes: Js.Dict.t(string)=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~className: option(string)=?,
        ~disableGutters: option(bool)=?,
        ~classes: option(Classes.t)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~className?,
          ~disableGutters?,
          ~classes=?Js.Option.map((. v) => Classes.to_obj(v), classes),
          ~style?,
          (),
        ),
      children,
    );
};

module Tooltip = {
  [@bs.deriving jsConverter]
  type placement = [
    | [@bs.as "bottom-end"] `Bottom_End
    | [@bs.as "bottom-start"] `Bottom_Start
    | [@bs.as "bottom"] `Bottom
    | [@bs.as "left-end"] `Left_End
    | [@bs.as "left-start"] `Left_Start
    | [@bs.as "left"] `Left
    | [@bs.as "right-end"] `Right_End
    | [@bs.as "right-start"] `Right_Start
    | [@bs.as "right"] `Right
    | [@bs.as "top-end"] `Top_End
    | [@bs.as "top-start"] `Top_Start
    | [@bs.as "top"] `Top
  ];
  module Classes = {
    type classesType =
      | Root(string)
      | Popper(string)
      | PopperClose(string)
      | Tooltip(string)
      | TooltipPlacementLeft(string)
      | TooltipPlacementRight(string)
      | TooltipPlacementTop(string)
      | TooltipPlacementBottom(string)
      | TooltipOpen(string);
    type t = list(classesType);
    let to_string =
      fun
      | Root(_) => "root"
      | Popper(_) => "popper"
      | PopperClose(_) => "popperClose"
      | Tooltip(_) => "tooltip"
      | TooltipPlacementLeft(_) => "tooltipPlacementLeft"
      | TooltipPlacementRight(_) => "tooltipPlacementRight"
      | TooltipPlacementTop(_) => "tooltipPlacementTop"
      | TooltipPlacementBottom(_) => "tooltipPlacementBottom"
      | TooltipOpen(_) => "tooltipOpen";
    let to_obj = listOfClasses =>
      listOfClasses
      |> StdLabels.List.fold_left(
           ~f=
             (obj, classType) => {
               switch (classType) {
               | Root(className)
               | Popper(className)
               | PopperClose(className)
               | Tooltip(className)
               | TooltipPlacementLeft(className)
               | TooltipPlacementRight(className)
               | TooltipPlacementTop(className)
               | TooltipPlacementBottom(className)
               | TooltipOpen(className) =>
                 Js.Dict.set(obj, to_string(classType), className)
               };
               obj;
             },
           ~init=Js.Dict.empty(),
         );
  };
  [@bs.module "material-ui/Tooltip/Tooltip"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~className: string=?,
      ~disableFocusListener: bool=?,
      ~disableHoverListener: bool=?,
      ~disableTouchListener: bool=?,
      ~enterDelay: 'number_s=?,
      ~enterTouchDelay: 'number_a=?,
      ~id: string=?,
      ~leaveDelay: 'number_g=?,
      ~leaveTouchDelay: 'number_8=?,
      ~onClose: unit => unit=?,
      ~onOpen: unit => unit=?,
      ~_open: bool=?,
      ~placement: string=?,
      ~_PopperProps: Js.t({..})=?,
      ~theme: Js.t({..}),
      ~title: ReasonReact.reactElement,
      ~classes: Js.Dict.t(string)=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~className: option(string)=?,
        ~disableFocusListener: option(bool)=?,
        ~disableHoverListener: option(bool)=?,
        ~disableTouchListener: option(bool)=?,
        ~enterDelay: option([ | `Int(int) | `Float(float)])=?,
        ~enterTouchDelay: option([ | `Int(int) | `Float(float)])=?,
        ~id: option(string)=?,
        ~leaveDelay: option([ | `Int(int) | `Float(float)])=?,
        ~leaveTouchDelay: option([ | `Int(int) | `Float(float)])=?,
        ~onClose: option(unit => unit)=?,
        ~onOpen: option(unit => unit)=?,
        ~_open: option(bool)=?,
        ~placement: option(placement)=?,
        ~_PopperProps: option(Js.t({..}))=?,
        ~theme: Js.t({..}),
        ~title: ReasonReact.reactElement,
        ~classes: option(Classes.t)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~className?,
          ~disableFocusListener?,
          ~disableHoverListener?,
          ~disableTouchListener?,
          ~enterDelay=?Js.Option.map((. v) => unwrapValue(v), enterDelay),
          ~enterTouchDelay=?
            Js.Option.map((. v) => unwrapValue(v), enterTouchDelay),
          ~id?,
          ~leaveDelay=?Js.Option.map((. v) => unwrapValue(v), leaveDelay),
          ~leaveTouchDelay=?
            Js.Option.map((. v) => unwrapValue(v), leaveTouchDelay),
          ~onClose?,
          ~onOpen?,
          ~_open?,
          ~placement=?Js.Option.map((. v) => placementToJs(v), placement),
          ~_PopperProps?,
          ~theme,
          ~title,
          ~classes=?Js.Option.map((. v) => Classes.to_obj(v), classes),
          ~style?,
          (),
        ),
      children,
    );
};

module Typography = {
  [@bs.deriving jsConverter]
  type align = [
    | [@bs.as "inherit"] `Inherit
    | [@bs.as "left"] `Left
    | [@bs.as "center"] `Center
    | [@bs.as "right"] `Right
    | [@bs.as "justify"] `Justify
  ];
  [@bs.deriving jsConverter]
  type color = [
    | [@bs.as "inherit"] `Inherit
    | [@bs.as "primary"] `Primary
    | [@bs.as "textSecondary"] `TextSecondary
    | [@bs.as "secondary"] `Secondary
    | [@bs.as "error"] `Error
    | [@bs.as "default"] `Default
  ];
  [@bs.deriving jsConverter]
  type variant = [
    | [@bs.as "display4"] `Display4
    | [@bs.as "display3"] `Display3
    | [@bs.as "display2"] `Display2
    | [@bs.as "display1"] `Display1
    | [@bs.as "headline"] `Headline
    | [@bs.as "title"] `Title
    | [@bs.as "subheading"] `Subheading
    | [@bs.as "body2"] `Body2
    | [@bs.as "body1"] `Body1
    | [@bs.as "caption"] `Caption
    | [@bs.as "button"] `Button
  ];
  module Classes = {
    type classesType =
      | Root(string)
      | Display4(string)
      | Display3(string)
      | Display2(string)
      | Display1(string)
      | Headline(string)
      | Title(string)
      | Subheading(string)
      | Body2(string)
      | Body1(string)
      | Caption(string)
      | Button(string)
      | AlignLeft(string)
      | AlignCenter(string)
      | AlignRight(string)
      | AlignJustify(string)
      | NoWrap(string)
      | GutterBottom(string)
      | Paragraph(string)
      | ColorInherit(string)
      | ColorPrimary(string)
      | ColorSecondary(string)
      | ColorTextSecondary(string)
      | ColorError(string);
    type t = list(classesType);
    let to_string =
      fun
      | Root(_) => "root"
      | Display4(_) => "display4"
      | Display3(_) => "display3"
      | Display2(_) => "display2"
      | Display1(_) => "display1"
      | Headline(_) => "headline"
      | Title(_) => "title"
      | Subheading(_) => "subheading"
      | Body2(_) => "body2"
      | Body1(_) => "body1"
      | Caption(_) => "caption"
      | Button(_) => "button"
      | AlignLeft(_) => "alignLeft"
      | AlignCenter(_) => "alignCenter"
      | AlignRight(_) => "alignRight"
      | AlignJustify(_) => "alignJustify"
      | NoWrap(_) => "noWrap"
      | GutterBottom(_) => "gutterBottom"
      | Paragraph(_) => "paragraph"
      | ColorInherit(_) => "colorInherit"
      | ColorPrimary(_) => "colorPrimary"
      | ColorSecondary(_) => "colorSecondary"
      | ColorTextSecondary(_) => "colorTextSecondary"
      | ColorError(_) => "colorError";
    let to_obj = listOfClasses =>
      listOfClasses
      |> StdLabels.List.fold_left(
           ~f=
             (obj, classType) => {
               switch (classType) {
               | Root(className)
               | Display4(className)
               | Display3(className)
               | Display2(className)
               | Display1(className)
               | Headline(className)
               | Title(className)
               | Subheading(className)
               | Body2(className)
               | Body1(className)
               | Caption(className)
               | Button(className)
               | AlignLeft(className)
               | AlignCenter(className)
               | AlignRight(className)
               | AlignJustify(className)
               | NoWrap(className)
               | GutterBottom(className)
               | Paragraph(className)
               | ColorInherit(className)
               | ColorPrimary(className)
               | ColorSecondary(className)
               | ColorTextSecondary(className)
               | ColorError(className) =>
                 Js.Dict.set(obj, to_string(classType), className)
               };
               obj;
             },
           ~init=Js.Dict.empty(),
         );
  };
  [@bs.module "material-ui/Typography/Typography"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~align: string=?,
      ~className: string=?,
      ~color: string=?,
      ~component: 'union_y=?,
      ~gutterBottom: bool=?,
      ~headlineMapping: Js.t({..})=?,
      ~noWrap: bool=?,
      ~paragraph: bool=?,
      ~variant: string=?,
      ~classes: Js.Dict.t(string)=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~align: option(align)=?,
        ~className: option(string)=?,
        ~color: option(color)=?,
        ~component:
           option([ | `String(string) | `Element(ReasonReact.reactElement)])=?,
        ~gutterBottom: option(bool)=?,
        ~headlineMapping: option(Js.t({..}))=?,
        ~noWrap: option(bool)=?,
        ~paragraph: option(bool)=?,
        ~variant: option(variant)=?,
        ~classes: option(Classes.t)=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~align=?Js.Option.map((. v) => alignToJs(v), align),
          ~className?,
          ~color=?Js.Option.map((. v) => colorToJs(v), color),
          ~component=?Js.Option.map((. v) => unwrapValue(v), component),
          ~gutterBottom?,
          ~headlineMapping?,
          ~noWrap?,
          ~paragraph?,
          ~variant=?Js.Option.map((. v) => variantToJs(v), variant),
          ~classes=?Js.Option.map((. v) => Classes.to_obj(v), classes),
          ~style?,
          (),
        ),
      children,
    );
};

module Zoom = {
  [@bs.deriving jsConverter]
  type timeoutShape = {
    enter: int,
    exit: int,
  };
  [@bs.module "material-ui/transitions/Zoom"]
  external reactClass : ReasonReact.reactClass = "default";
  [@bs.obj]
  external makeProps :
    (
      ~_in: bool=?,
      ~onEnter: unit => unit=?,
      ~onExit: unit => unit=?,
      ~theme: Js.t({..}),
      ~timeout: 'union_g=?,
      ~style: ReactDOMRe.style=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~_in: option(bool)=?,
        ~onEnter: option(unit => unit)=?,
        ~onExit: option(unit => unit)=?,
        ~theme: Js.t({..}),
        ~timeout:
           option([ | `Int(int) | `Float(float) | `Object(timeoutShape)])=?,
        ~style: option(ReactDOMRe.style)=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~_in?,
          ~onEnter?,
          ~onExit?,
          ~theme,
          ~timeout=?
            Js.Option.map(
              (. v) =>
                switch (v) {
                | `Object(v) => unwrapValue(`Element(timeoutShapeToJs(v)))
                | v => unwrapValue(v)
                },
              timeout,
            ),
          ~style?,
          (),
        ),
      children,
    );
};
