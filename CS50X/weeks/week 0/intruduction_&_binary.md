Computers operate entirely on binary, using base-2 numbers composed of 0s and 1s. Physically, this is implemented using transistors that act as tiny switches—either turning off (representing 0, or low voltage) or turning on (representing 1, or high voltage). Because a single bit can only represent two states, computers group bits together to represent larger amounts of data. A byte consists of 8 bits, which allows for $2^8$ (or 256) distinct combinations, ranging from 0 to 255.

To translate human text into numbers that computers can process, standard encoding systems are used:

ASCII: An early 8-bit standard that maps numbers to basic English characters, numbers, and symbols. For example, the uppercase letter 'A' is assigned the decimal number 65 (which is 01000001 in binary). Since it uses 8 bits, ASCII is limited to 128 or 256 characters, making it insufficient for global languages.

Unicode: A modern, expansive standard designed to include virtually all the world's writing systems, non-Latin scripts, and emojis. Unicode uses 16 or 32 bits per character, allowing for over a million unique code points, ensuring global text compatibility.

For visual information like images and colors, the same binary foundation applies using the RGB color model:

Pixels: Digital images are made up of a grid of tiny dots called pixels.

RGB Channels: Each individual pixel's color is determined by combining three primary color intensities: Red, Green, and Blue.

Byte Allocation: Each of the three color channels is typically represented by 1 byte (8 bits), allowing intensity values from 0 to 255. This means a single standard pixel uses 3 bytes of data total, combining different levels of red, green, and blue light to display millions of possible colors on a screen.