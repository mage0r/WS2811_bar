WS2811_bar
=============

This project drives a LED bar graph using a single pin from your microcontroller.

It is designed around using the popular WS2811 LED driver chip commonly used in the adafruit neopixels.  This also means several bar graphs can be chained together or the bar graph can follow a sequence of WS2811 or WS2812 LED's.

There has three sections, a kicad circuit diagram, an arduino sketch using the neopixel library from adafruit and lastly a few photos of it in action.

Of course, this is a hacky way to use these chips and there are several disadvantages.  Chifely, each chip drives 3 seperate LED's, meaning if you want to iterate through them activating each one, you have to iterate not only through the "pixels" but also through the "colours".

Also, as each chip drives 3 LED's and there are 10 LED's all up, there are two channels "spare", these are the last two of the last pixel.

Depending on the WS2811 chip you use, you may end up with a GRB rather than a RGB.  Just because there wasn't enough confusion already...

Improvements and changes cheerfully accepted.

![WS2811_bar](https://raw2.github.com/mage0r/WS2811_bar/master/Photos/2014-01-04%2015.56.35.jpg "10 digit bar graph controlled by ws2811 chips")

![WS2811_bar](https://raw2.github.com/mage0r/WS2811_bar/master/Photos/2014-01-05%2021.15.20.jpg "10 and 15 digit bar graph controlled by ws2811 chips")

![WS2811_bar](https://www.youtube.com/watch?v=YOKhcFke9yQ)

CREDITS
------------
This board was designed by John Spencer - john.spencer.9000@gmail.com - https://github.com/mage0r

SPECIAL THANKS
------------
To the creators and maintainers of the KiCAD open-source EDA suite.
To the HackMelbourne (CCHS, http://hackmelbourne.org) community of Melbourne, Australia. Especially Lachlan Maher, and Bob Powers.
To all other open-source developers whose countless hours supported every other aspect of this design.
Extra thanks to Bob because I copied his README.md almost verbatim...

DISTRIBUTION
------------
The specific terms of distribution of this project are governed by the
license referenced below. Please contact the copyright owner if you wish to modify the board for distribution. Please utilize this design for personal or research projects. Please acknowledge all contributors.

LICENSE
-------
Licensed under the TAPR Open Hardware License (www.tapr.org/OHL).
The "license" sub-folder also contains a copy of this license in plain text format.

Copyright John Spencer 2013
john.spencer.9000@gmail.com
