<h3 align="center">ausgezoomt</h3>
<p align="center">Zoom Emergency Stop Button</p>

<p align="center">
<img src="https://github.com/duuusen/ausgezoomt/blob/master/ausgezoomt.png" width="400">
</p>

A brute yet cathartic  emergency stop button to quickly end all zoom meetings.
Inspired by [Brian Moore](https://github.com/lanewinfield/zoomout) and [elliotmade](https://www.instructables.com/Zoom-Meetings-Physical-Mute-Button/), but with a rather rough approach by force quitting zoom, preventing all dialogues and resistance.

## Method
It uses a Digispark ATtiny85, a cute little Arduino clone, which acts as an external USB keyboard. When pressed (complete circuit), it sends a configurable keystroke, which [Alfred](https://www.alfredapp.com) registers and then triggers an AppleScript, killing the zoom (and google meet tabs) process.

## Building & Installing
### Libraries & Board Controllers
- [Digispark](https://github.com/digistump/DigistumpArduino)
- [OneButton](https://github.com/mathertel/OneButton) (because buttons provide _'very complex interaction'_)

### Hardware
- Most badass emergency stop button you can find
- [ATtiny85](https://www.bastelgarage.ch/attiny85-digispark-micro-usb-kompatibles-board)
- 10k resistor
- Wires
- Micro USB cable

### Wiring
Like elliotmade's [example](https://www.instructables.com/Zoom-Meetings-Physical-Mute-Button/):
- 10k resistor between 5V and P0
- Wires at GND and P0

Careful not to create any short circuits, as the board does not have a short circuit protection and could damage the USB port.
