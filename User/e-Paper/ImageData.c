/*****************************************************************************
* | File      	:   ImageData.c
* | Author      :   MH-ET LIVE
* | Function    :	
*----------------
* |	This version:   V2.0
* | Date        :   2018-12-5
* | Info        :
*
#
# Permission is hereby granted, free of charge, to any person obtaining a copy
# of this software and associated documnetation files (the "Software"), to deal
# in the Software without restriction, including without limitation the rights
# to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
# copies of the Software, and to permit persons to  whom the Software is
# furished to do so, subject to the following conditions:
#
# The above copyright notice and this permission notice shall be included in
# all copies or substantial portions of the Software.
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS OR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
# OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
# THE SOFTWARE.
#

******************************************************************************/

#include "ImageData.h"

//////////////////////Refresh the picture in full screen///////////////////////

const unsigned char gImage_1[5000] = { /* 0X01,0X01,0XC8,0X00,0XC8,0X00, */
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XC3,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X83,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XF0,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X3F,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0X80,0X00,0X00,0XF8,0X0E,0X1F,0XE0,0X3F,0XE0,0X00,0XC0,0X00,0X00,0X70,0X00,
0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X00,0XF8,0X06,0X1F,
0XE0,0X1F,0XE0,0X00,0XC0,0X00,0X00,0X70,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0X80,0X00,0X00,0XF8,0X04,0X1F,0XE0,0X1F,0XE0,0X00,0XC0,0X00,0X00,
0X70,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X00,0XF8,
0X00,0X00,0X00,0X3F,0XE0,0X00,0XC0,0X00,0X00,0X70,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0X87,0XFF,0XF0,0XFF,0X00,0XC0,0X01,0XFF,0XE1,0XFF,0XC1,
0XFF,0XF8,0X70,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X87,0XFF,
0XF0,0XFF,0X00,0XC0,0X01,0XFF,0XE1,0XFF,0XC1,0XFF,0XF8,0X70,0X01,0XFC,0X3F,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X86,0X00,0X30,0XC0,0X00,0X00,0X00,0X00,0XE0,
0X00,0XC1,0X80,0X18,0X70,0X07,0XC0,0X03,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0X86,0X00,0X30,0XC0,0X20,0X18,0X7C,0X00,0X7C,0X00,0XC1,0X80,0X18,0X70,0X0F,0X00,
0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X86,0X00,0X30,0XC0,0X60,0X18,0X7C,
0X00,0X7C,0X00,0XC1,0X80,0X18,0X70,0X1E,0X00,0X00,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0X86,0X00,0X30,0XC0,0X00,0X18,0X0C,0X00,0X1C,0X00,0XC1,0X80,0X18,0X70,
0X3C,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X86,0X00,0X30,0XC0,0X00,
0XF8,0X0C,0X1E,0X0C,0X3F,0XC1,0X80,0X18,0X70,0X38,0X00,0X00,0X1F,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0X86,0X00,0X30,0XC0,0X00,0XF8,0X0C,0X1F,0X0C,0X3F,0XC1,0X80,
0X18,0X70,0X70,0X00,0X00,0X0F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X86,0X00,0X30,
0XC0,0X00,0X38,0X00,0X38,0X00,0X07,0XC1,0X80,0X18,0X70,0XE0,0X00,0X00,0X0F,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X86,0X00,0X30,0XC0,0X00,0X1C,0X00,0X70,0X00,0X07,
0XC1,0X80,0X18,0X70,0XE0,0X0F,0XE0,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X86,
0X00,0X30,0XC0,0X06,0X1F,0X01,0XF0,0X60,0X07,0XC1,0X80,0X18,0X70,0XC0,0X1F,0XF8,
0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X86,0X00,0X30,0XC0,0X00,0X07,0X01,0XC0,
0X00,0X07,0XC1,0X80,0X18,0X71,0XC0,0X3F,0XF8,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0X87,0X00,0X70,0XE0,0X00,0X03,0X01,0X80,0X00,0X07,0XC1,0X80,0X38,0X71,0XC0,
0X7F,0XFC,0X03,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X87,0XFF,0XF0,0XFF,0XE0,0XC3,
0X01,0X83,0X0C,0X07,0XC1,0XFF,0XF8,0X71,0XC0,0X7F,0XFC,0X03,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0X83,0XFF,0XE0,0XFF,0XE0,0X83,0X01,0X83,0X0C,0X03,0XC1,0XFF,0XF8,
0X71,0X80,0X7F,0XFE,0X03,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X00,0XC3,
0X00,0X00,0X01,0X83,0X0C,0X00,0XC0,0X00,0X00,0X71,0X80,0X7F,0XFE,0X03,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X00,0XC3,0X06,0X18,0X61,0X83,0X0C,0X30,0XC0,
0X00,0X00,0X71,0X80,0X7F,0XFE,0X03,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X80,0X00,
0X00,0XC3,0X06,0X18,0X60,0X82,0X0C,0X30,0XC0,0X00,0X00,0X71,0X80,0X7F,0XFE,0X03,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X00,0XC3,0X06,0X00,0X60,0X00,0X00,
0X30,0XE0,0X00,0X00,0X71,0XC0,0X7F,0XFC,0X03,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0X06,0X00,0X7C,0X10,0X00,0X3F,0XFF,0XFF,0XFF,0XF1,0XC0,0X3F,
0XFC,0X03,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X06,0X00,0X7C,
0X10,0X00,0X3F,0XFF,0XFF,0XFF,0XF0,0XC0,0X3F,0XF8,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0X80,0X1F,0X80,0X00,0X06,0X00,0X00,0X30,0X00,0X00,0X1F,0X80,0X1F,0XF0,
0XC0,0X0F,0XF0,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X80,0X0F,0X80,0X00,0X06,
0X1F,0X00,0X10,0X7C,0X00,0X0F,0X80,0X1F,0XF0,0XE0,0X03,0XC0,0X0F,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0X80,0X0F,0X80,0X00,0X06,0X1F,0X00,0X10,0X7C,0X00,0X0F,0X80,
0X1F,0XF0,0X70,0X00,0X00,0X0F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X00,
0X00,0X06,0X18,0X00,0X38,0X0C,0X00,0X03,0X80,0X00,0X70,0X70,0X00,0X00,0X1F,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X00,0X06,0X03,0X07,0XF8,0X01,0XFF,0X0C,0X3F,
0XC1,0XFF,0XC0,0X70,0X38,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,
0X00,0X06,0X03,0X07,0XF8,0X01,0XFF,0X0C,0X3F,0XC1,0XFF,0XC0,0X70,0X1C,0X00,0X00,
0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X07,0XC3,0XF0,0X00,0X70,0X0E,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0X80,0X7F,0X00,0XF8,0X00,0X00,0X00,0X00,0X61,0X87,0XFF,0XF0,0X03,0XF0,0X07,
0X80,0X03,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X80,0XFF,0X80,0XF8,0X00,0X00,
0X00,0X00,0X61,0X87,0XFF,0XF0,0X03,0XF0,0X03,0XE0,0X0F,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0X80,0X1F,0X80,0XC0,0X00,0X00,0X00,0X00,0X60,0X00,0X1C,0X00,0X00,
0X70,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X0F,0XFF,0XC1,
0X00,0XF0,0X04,0X1F,0XE0,0X30,0X08,0X00,0XF8,0X70,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X0F,0XFF,0XC3,0X00,0XF8,0X0C,0X1F,0XE0,0X30,0X08,
0X00,0XF8,0X70,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X03,
0X81,0XC0,0X00,0X38,0X00,0X18,0X00,0X00,0X00,0X00,0XE0,0X70,0X00,0X3F,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X01,0X80,0XC0,0X00,0X18,0X00,0X10,0X00,
0X00,0X00,0X00,0XC0,0X70,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XF0,0X01,0X80,0XC0,0X7E,0X18,0X60,0X10,0X01,0X80,0XC1,0XF0,0XC0,0X70,0X00,0X7F,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0X01,0X80,0X00,0X00,0X00,0X00,
0X00,0X01,0X80,0X00,0X00,0XC0,0X70,0X01,0XFE,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0X80,0X03,0X80,0X00,0X00,0X00,0X00,0X00,0X03,0X80,0X00,0X01,0XC0,0X70,
0X03,0XC0,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X87,0XFF,0X86,0X00,0X00,
0XC0,0X00,0X03,0XFF,0X86,0X08,0X07,0XC0,0X70,0X0F,0X00,0X01,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0X83,0XFF,0X06,0X00,0X00,0XC0,0X00,0X03,0XFF,0X82,0X08,0X07,
0XC0,0X70,0X1E,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X80,0XFC,0X00,
0X00,0X01,0XC0,0X00,0X00,0X0F,0X80,0X00,0X07,0XC0,0X70,0X3C,0X00,0X00,0X3F,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0XFC,0X30,0X18,0X7F,0XC3,0X0F,0XF0,0X0F,0XF0,
0X00,0X07,0XF8,0X70,0X38,0X00,0X00,0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,
0X78,0X30,0X18,0X7F,0X83,0X0F,0XF0,0X0F,0XF0,0X00,0X07,0XF8,0X70,0X70,0X00,0X00,
0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X80,0X1C,0X30,0X18,0X7E,0X00,0X0F,0X80,
0X0C,0X00,0X00,0X06,0X18,0X70,0X60,0X00,0X00,0X0F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0X86,0X08,0X3E,0X1F,0XFE,0X00,0X0F,0X80,0X0C,0X06,0X0F,0X86,0X18,0X70,0XE0,
0X07,0XE0,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X86,0X08,0X3E,0X1F,0XFE,0X00,
0X0F,0X80,0X0C,0X06,0X0F,0X86,0X18,0X70,0XC0,0X1F,0XF0,0X07,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0X86,0X0C,0X30,0X03,0X0E,0X00,0X0C,0X00,0X00,0X06,0X1F,0X86,0X00,
0X70,0XC0,0X3F,0XF8,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X86,0X0F,0XF0,0XC3,
0X06,0X00,0X0C,0X10,0X61,0XFE,0X0F,0XFF,0XC0,0X71,0XC0,0X7F,0XFC,0X03,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0X86,0X0F,0XF0,0XC3,0X06,0X00,0X0C,0X10,0X61,0XFE,0X0F,
0XFF,0XC0,0X71,0XC0,0X7F,0XFC,0X03,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X86,0X00,
0X30,0XC0,0X0E,0X00,0X0C,0X30,0X61,0X80,0X1C,0X06,0X00,0X71,0X80,0X7F,0XFE,0X03,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X00,0X3F,0XF8,0X3F,0XF8,0X7F,0XF0,0X7F,
0X80,0X08,0X06,0X18,0X71,0X80,0X7F,0XFE,0X03,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFE,0X00,0X3F,0XF8,0X7F,0XF8,0X7F,0XF0,0X7F,0X80,0X08,0X06,0X18,0X71,0X80,0X7F,
0XFE,0X03,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X30,0XF8,0X00,0X18,0X61,
0XF8,0X00,0X00,0X00,0X00,0X18,0X71,0X80,0X7F,0XFE,0X03,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0X80,0X0F,0XF0,0XF8,0X00,0X18,0X61,0XFE,0X00,0X30,0X01,0XF0,0XFF,0XF1,
0XC0,0X7F,0XFC,0X03,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X80,0X0F,0XF0,0XF8,0X00,
0X18,0X61,0XFF,0X00,0X30,0X01,0XF0,0XFF,0XF1,0XC0,0X3F,0XFC,0X03,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0X80,0X03,0XF0,0X18,0X00,0X00,0X61,0XC7,0X00,0X30,0X01,0XF0,
0XF8,0X70,0XC0,0X3F,0XF8,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X01,0XFE,
0X1F,0XE0,0X00,0X61,0X83,0XFF,0XFE,0X0F,0XF0,0XF8,0X70,0XC0,0X1F,0XF0,0X07,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X01,0XFE,0X1F,0XE0,0X00,0X61,0X83,0XFF,0XFE,
0X0F,0XF0,0XF8,0X70,0XE0,0X07,0XC0,0X0F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,
0X00,0X70,0X03,0X80,0X00,0X61,0X83,0XFF,0XC6,0X00,0X70,0X00,0X70,0X60,0X00,0X00,
0X0F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X30,0X03,0X00,0X00,0XE1,0XC7,
0XFF,0X86,0X00,0X38,0X00,0X70,0X70,0X00,0X00,0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XF0,0X0C,0X30,0XC3,0X00,0X1F,0XE1,0XFF,0XFF,0X86,0X00,0X3E,0X00,0X70,0X38,
0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0X08,0X30,0X03,0X00,0X1F,
0X81,0XC0,0XF3,0X86,0X00,0X0E,0X00,0X70,0X1C,0X00,0X00,0X7F,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0X80,0X0C,0X70,0X03,0X80,0X1F,0X01,0X80,0X61,0X86,0X00,0X07,0X00,
0X70,0X0E,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X80,0X0F,0XFE,0X1F,
0XFE,0X1F,0X0F,0X80,0X61,0X86,0X00,0X07,0XF8,0X70,0X07,0X80,0X01,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0X80,0X0F,0XFE,0X0F,0XFE,0X1F,0X07,0X80,0X41,0X82,0X00,
0X07,0XF8,0X70,0X03,0XE0,0X0F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X80,0X1F,
0X80,0X03,0X06,0X18,0X00,0X00,0X01,0X80,0X00,0X00,0X00,0X70,0X01,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0XFF,0X80,0XC3,0X06,0X18,0X00,0X00,0X0F,
0X80,0XF8,0X30,0X03,0XF0,0X00,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XF0,0X7F,0X80,0XC3,0X06,0X18,0X00,0X00,0X0F,0X80,0X78,0X30,0X03,0XF0,0X00,0X3F,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X80,0X01,0X80,0XC0,0X0E,0X00,0X00,
0X00,0X0C,0X00,0X00,0X30,0X00,0X70,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0X86,0X01,0XFF,0XF8,0X7E,0X03,0X00,0X10,0X0C,0X00,0X00,0X30,0XF8,0X70,
0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X86,0X01,0XFF,0XF8,0X7C,
0X03,0X00,0X10,0X0C,0X00,0X00,0X30,0XF8,0X70,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0X86,0X00,0X30,0X00,0X70,0X03,0X00,0X00,0X0C,0X00,0X00,0X00,
0X18,0X70,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X87,0XF8,0X30,
0X00,0X60,0X1F,0XE0,0X00,0X0C,0X30,0X00,0X00,0X18,0X70,0X00,0X3F,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X87,0XF8,0X30,0X00,0X60,0X1F,0XE0,0X00,0X0C,0X30,
0X00,0X00,0X18,0X70,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X87,
0XFC,0X30,0X00,0X00,0X18,0X60,0X00,0X00,0X30,0X00,0X00,0X00,0X70,0X00,0X3F,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0X00,0X18,0X61,0XF0,
0X61,0XF0,0XFF,0X06,0X00,0X70,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XC0,0X00,0X18,0X61,0XF0,0X61,0XF0,0XFF,0X86,0X00,0X70,0X00,
0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X00,0XC0,0X00,0X00,
0X60,0X38,0X61,0XF0,0XE3,0X86,0X00,0X70,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0X80,0X00,0X00,0XC0,0X20,0X80,0X7C,0X1F,0XFF,0XF0,0XC1,0X86,0X00,
0X70,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X00,0XC0,
0X60,0XC0,0X7C,0X1F,0XFF,0XF0,0XC1,0X86,0X00,0X70,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X00,0XC0,0X00,0X00,0X60,0X00,0X1C,0X30,0XC1,
0X86,0X00,0X70,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X83,0XFF,
0XE0,0XC1,0X04,0X10,0X60,0X80,0X0C,0X30,0XFF,0X87,0XC1,0XF0,0X00,0X3F,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X87,0XFF,0XF0,0XC3,0X06,0X18,0X61,0X80,0X0C,
0X30,0XFF,0X87,0XC3,0XF0,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0X87,0X00,0X70,0XC3,0X06,0X00,0X01,0X80,0X0C,0X00,0X00,0X01,0XC3,0XF0,0X00,0X3F,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X86,0X00,0X30,0XE7,0X8E,0X00,0X01,
0XC0,0X0C,0X00,0X00,0X00,0XE7,0XF0,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0X86,0X00,0X30,0XFF,0XFF,0XC0,0X01,0XFF,0X0C,0X00,0X00,0X00,0XFF,0XF0,
0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X86,0X00,0X30,0XFF,0X80,
0X00,0X01,0XFA,0X00,0X00,0X00,0X00,0X3F,0XF0,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0X86,0X00,0X30,0XFF,0X00,0X00,0X01,0XF0,0X00,0X00,0X00,0X00,
0X1F,0XF0,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X86,0X00,0X30,
0XFF,0X00,0X00,0X7F,0XF0,0X00,0X3F,0XC0,0X00,0X1F,0XF0,0X00,0X3F,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X86,0X00,0X30,0XFF,0X00,0X00,0X7F,0XF0,0X00,0X3F,
0XC0,0X00,0X1F,0XF0,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X86,
0X00,0X30,0XC3,0X00,0X00,0X0F,0X80,0X00,0X06,0X00,0X00,0X00,0X70,0X00,0X3F,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X86,0X00,0X30,0XC3,0X00,0XF8,0X0F,0X80,
0X61,0X86,0X08,0X3F,0XC0,0X70,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0X86,0X00,0X30,0XC3,0X00,0XF8,0X0F,0X80,0X61,0X86,0X08,0X3F,0XC0,0X70,0X00,
0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X87,0X00,0X30,0XC0,0X00,0X18,
0X01,0X80,0X00,0X00,0X00,0X00,0XC0,0X70,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0X87,0XFF,0XF0,0XC0,0X00,0X18,0X61,0X80,0X0C,0X30,0X00,0X00,0XF8,
0X70,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X87,0XFF,0XF0,0XC0,
0X00,0X18,0X61,0X80,0X0C,0X30,0X00,0X00,0XF8,0X70,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X00,0XC0,0X00,0X00,0X60,0X00,0X00,0X30,0X00,
0X00,0XF8,0X70,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X80,0X00,
0X00,0XC0,0X60,0XC3,0XE0,0X10,0X01,0XFE,0X08,0X3F,0XFF,0XF0,0X00,0X3F,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X00,0XC0,0X60,0XC3,0XE0,0X10,0X01,
0XFE,0X08,0X3F,0XFF,0XF0,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0X80,0X00,0X00,0XC0,0X70,0XC3,0XE0,0X38,0X01,0XFE,0X1C,0X3F,0XFF,0XF0,0X00,0X3F,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,
0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XF0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XC0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XC0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XC0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XC0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X03,0XE0,0X0F,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X07,0X80,0X03,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XC0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X0E,0X00,0X00,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X1C,0X00,0X00,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XC0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X38,0X00,0X00,
0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0X3F,0XFF,0XFF,
0XFF,0XFF,0XC0,0X00,0X00,0X00,0X70,0X00,0X00,0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0X7F,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X70,
0X00,0X00,0X0F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0X7F,
0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X00,0XE0,0X01,0X80,0X0F,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0X7F,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,
0X00,0XC0,0X0F,0XE0,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XC0,0X7F,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X00,0XC0,0X1F,0XF8,0X07,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0X7F,0XFF,0XFF,0XFF,0XFF,0XF0,
0X00,0X00,0X01,0XC0,0X3F,0XFC,0X03,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XC0,0X7F,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X01,0XC0,0X7F,0XFC,0X03,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0X7F,0XFF,0XFF,0XFF,
0XFF,0XF0,0X00,0X00,0X01,0X80,0X7F,0XFC,0X03,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XC0,0X7F,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X01,0X80,0X7F,
0XFE,0X03,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0X7F,0XFF,
0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X01,0X80,0X7F,0XFE,0X03,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0X7F,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X01,
0X80,0X7F,0XFE,0X03,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,
0X7F,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X01,0XC0,0X7F,0XFC,0X03,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0X7F,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,
0X00,0X01,0XC0,0X7F,0XFC,0X03,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XC0,0X7F,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X01,0XC0,0X3F,0XFC,0X07,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0X7F,0XFF,0XFF,0XFF,0XFF,
0XF0,0X00,0X00,0X00,0XC0,0X1F,0XF8,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XC0,0X7F,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X00,0XE0,0X0F,0XE0,
0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0X7F,0XFF,0XFF,
0XFF,0XFF,0XF0,0X00,0X00,0X00,0X60,0X03,0X80,0X0F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0X3F,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X00,0X70,
0X00,0X00,0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0X3F,
0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X00,0X38,0X00,0X00,0X1F,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0X1F,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,
0X00,0X3C,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XC0,0X07,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X00,0X1E,0X00,0X00,0X7F,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0X01,0XFF,0XFF,0XFF,0XFF,0XF0,
0X00,0X00,0X00,0X0F,0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XE0,0X00,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X00,0X07,0XC0,0X07,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X3F,0XFF,0XFF,
0XFF,0XF0,0X00,0X00,0X00,0X01,0XFC,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X0F,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X00,0X00,0X7F,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X00,0X07,
0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X00,0X01,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X00,
0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0X80,0X00,0X7F,0XFF,0XFF,0XF0,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X3F,0XFF,0XFF,0XF0,0X00,
0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XF8,0X00,0X0F,0XFF,0XFF,0XF0,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X00,0X07,0XFF,0XFF,
0XF0,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0X00,0X01,0XFF,0XFF,0XF0,0X00,0X00,0X00,0X00,0X3F,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0X00,
0X7F,0XFF,0XF0,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X3F,0XFF,0XF0,0X00,0X00,0X00,0X00,
0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XF8,0X00,0X0F,0XFF,0XF0,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X00,0X03,0XFF,0XF0,0X00,0X00,
0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0X00,0X01,0XFF,0XF0,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0X00,0X7F,0XF0,
0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X3F,0XF0,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X00,
0X0F,0XF0,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X00,0X07,0XF0,0X00,0X00,0X00,0X00,0X3F,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0X00,0X01,0XF0,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0X00,0X00,0X00,0X00,0X00,
0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0X00,0X00,
0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X80,
0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XF0,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X00,0X00,0X00,0X00,0X00,
0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFE,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X00,
0X70,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X70,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0X00,0X03,0XF0,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X3F,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,};
