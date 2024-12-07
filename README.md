# Master Detective Archives: Rain Code Plus Fix
[![Patreon-Button](https://raw.githubusercontent.com/Lyall/MDARainCodePlusFix/refs/heads/master/.github/Patreon-Button.png)](https://www.patreon.com/Wintermance) [![ko-fi](https://ko-fi.com/img/githubbutton_sm.svg)](https://ko-fi.com/W7W01UAI9)<br />
[![Github All Releases](https://img.shields.io/github/downloads/Lyall/MDARainCodePlusFix/total.svg)](https://github.com/Lyall/MDARainCodePlusFix/releases)

This is an ASI plugin for Master Detective Archives: Rain Code Plus that adds ultrawide/narrower support, skips intro logos and more.

## Features
### General
- Skip intro logos.
- Enable developer console.

### Ultrawide/narrower
- Support for any aspect ratio.
- HUD fixes and a centered HUD option.
- Correct FOV at any aspect ratio.

## Installation
- Grab the latest release of MDARainCodePlusFix from [here.](https://github.com/Lyall/MDARainCodePlusFix/releases)
- Extract the contents of the release zip in to the the game folder.
e.g. ("**steamapps\common\MDA - RAIN CODE Plus**" for Steam).

### Steam Deck/Linux Additional Instructions
🚩**You do not need to do this if you are using Windows!**
- Open up the game properties in Steam and add `WINEDLLOVERRIDES="dsound=n,b" %command%` to the launch options.

## Configuration
- See **MDARainCodePlusFix.ini** to adjust settings.

## Screenshots

| ![ezgif-6-30b9b4d983](https://github.com/user-attachments/assets/1f1dea0b-6888-4ab8-8984-a6a969db46db) |
|:--------------------------:|
| Gameplay |

## Known Issues
Please report any issues you see.

## Credits
Thanks to Aelzaire for making this fix possible! <br />
[Ultimate ASI Loader](https://github.com/ThirteenAG/Ultimate-ASI-Loader) for ASI loading. <br />
[inipp](https://github.com/mcmtroffaes/inipp) for ini reading. <br />
[spdlog](https://github.com/gabime/spdlog) for logging. <br />
[safetyhook](https://github.com/cursey/safetyhook) for hooking.<br />
[Dumper-7](https://github.com/Encryqed/Dumper-7) for dumping the SDK.
