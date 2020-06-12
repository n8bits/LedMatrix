#define WIDTH 5
#define HEIGHT 5
#define RED 0
#define GREEN 1
#define BLUE 2
#define COLORS_PER_LED 3


#include "Tlc5940.h"



int CHARACTER_A[] = {
	0, 1, 1, 1, 0,
	0, 1, 0, 1, 0,
	0, 1, 1, 1, 0,
	0, 1, 0, 1, 0,
	0, 1, 0, 1, 0 };

int CHARACTER_B[] = {
	0, 1, 1, 1, 0,
	0, 1, 0, 1, 0,
	0, 1, 1, 1, 0,
	0, 1, 0, 1, 0,
	0, 1, 1, 0, 1 };

int CHARACTER_C[] = {
	0, 1, 1, 1, 0,
	0, 1, 0, 0, 0,
	0, 1, 0, 0, 0,
	0, 1, 0, 0, 0,
	0, 1, 1, 1, 0 };

int CHARACTER_D[] = {
	0, 1, 1, 0, 0,
	0, 1, 0, 1, 0,
	0, 1, 0, 1, 0,
	0, 1, 0, 1, 0,
	0, 1, 1, 0, 0 };

int CHARACTER_E[] = {
	0, 1, 1, 1, 0,
	0, 1, 0, 0, 0,
	0, 1, 1, 1, 0,
	0, 1, 0, 0, 0,
	0, 1, 1, 1, 0 };

int CHARACTER_F[] = {
	0, 1, 1, 1, 0,
	0, 1, 0, 0, 0,
	0, 1, 1, 1, 0,
	0, 1, 0, 0, 0,
	0, 1, 0, 0, 1 };

int CHARACTER_G[] = {
	0, 1, 1, 1, 0,
	0, 1, 0, 0, 0,
	0, 1, 1, 1, 0,
	0, 1, 0, 1, 0,
	0, 1, 1, 1, 1 };

int CHARACTER_H[] = {
	0, 1, 0, 1, 0,
	0, 1, 0, 1, 0,
	0, 1, 1, 1, 0,
	0, 1, 0, 1, 0,
	0, 1, 0, 1, 0 };

int CHARACTER_I[] = {
	0, 1, 1, 1, 0,
	0, 0, 1, 0, 0,
	0, 0, 1, 0, 0,
	0, 0, 1, 0, 0,
	0, 1, 1, 1, 0 };

int CHARACTER_J[] = {
	0, 1, 1, 1, 0,
	0, 0, 1, 0, 0,
	0, 0, 1, 0, 0,
	0, 0, 1, 0, 0,
	0, 0, 0, 1, 0 };

int CHARACTER_K[] = {
	0, 1, 0, 1, 0,
	0, 1, 0, 1, 0,
	0, 1, 1, 0, 0,
	0, 1, 0, 1, 0,
	0, 1, 0, 1, 0 };

int CHARACTER_L[] = {
	0, 1, 0, 0, 0,
	0, 1, 0, 0, 0,
	0, 1, 0, 0, 0,
	0, 1, 0, 0, 0,
	0, 1, 1, 1, 0 };

int CHARACTER_M[] = {
	0, 1, 0, 1, 0,
	0, 1, 1, 1, 0,
	0, 1, 1, 1, 0,
	0, 1, 0, 1, 0,
	0, 1, 0, 1, 0 };

int CHARACTER_N[] = {
	0, 1, 0, 1, 0,
	0, 1, 1, 1, 0,
	0, 1, 1, 1, 0,
	0, 1, 0, 1, 0,
	0, 1, 0, 1, 0 };

int CHARACTER_O[] = {
	0, 1, 1, 1, 0,
	0, 1, 0, 1, 0,
	0, 1, 0, 1, 0,
	0, 1, 0, 1, 0,
	0, 1, 1, 1, 0 };

int CHARACTER_P[] = {
	0, 1, 1, 1, 0,
	0, 1, 0, 1, 0,
	0, 1, 1, 1, 0,
	0, 1, 0, 0, 0,
	0, 1, 0, 0, 0 };

int CHARACTER_Q[] = {
	0, 0, 0, 0, 0,
	0, 1, 1, 1, 0,
	0, 1, 0, 1, 0,
	0, 1, 0, 1, 0,
	0, 1, 1, 1, 1 };

int CHARACTER_R[] = {
	0, 1, 1, 1, 0,
	0, 1, 0, 1, 0,
	0, 1, 1, 1, 0,
	0, 1, 1, 0, 0,
	0, 1, 1, 1, 0 };

int CHARACTER_S[] = {
	0, 1, 1, 1, 0,
	0, 1, 0, 0, 0,
	0, 1, 1, 1, 0,
	0, 0, 0, 1, 0,
	0, 1, 1, 1, 0 };

int CHARACTER_T[] = {
	0, 0, 0, 0, 0,
	0, 1, 1, 1, 0,
	0, 0, 1, 0, 0,
	0, 0, 1, 0, 0,
	0, 0, 1, 0, 0 };

int CHARACTER_U[] = {
	0, 0, 0, 0, 0,
	0, 1, 0, 1, 0,
	0, 1, 0, 1, 0,
	0, 1, 0, 1, 0,
	0, 1, 1, 1, 0 };

int CHARACTER_V[] = {
	0, 1, 0, 1, 0,
	0, 1, 0, 1, 0,
	0, 1, 0, 1, 0,
	0, 1, 0, 1, 0,
	0, 0, 1, 0, 0 };

int CHARACTER_W[] = {
	0, 0, 0, 0, 0,
	0, 1, 0, 1, 0,
	0, 1, 0, 1, 0,
	0, 1, 1, 1, 0,
	0, 1, 0, 1, 0 };

int CHARACTER_X[] = {
	0, 0, 0, 0, 0,
	0, 1, 0, 1, 0,
	0, 0, 1, 1, 0,
	0, 0, 1, 0, 0,
	0, 1, 0, 1, 0 };

int CHARACTER_Y[] = {
	0, 1, 0, 1, 0,
	0, 1, 0, 1, 0,
	0, 0, 1, 0, 0,
	0, 0, 1, 0, 0,
	0, 0, 1, 0, 0 };

int CHARACTER_Z[] = {
	0, 0, 0, 0, 0,
	0, 1, 1, 1, 0,
	0, 0, 1, 0, 0,
	0, 1, 0, 0, 0,
	0, 1, 1, 1, 0 };

int* character[200];


int rows[] = { 2, A5, A4, A3, A2 };
int rowIndex = 0;
long del = 1;
long timer = 0;
int interval = 100;
int counter = 0;
int lastRow = 0;
int raster[75];
int pixels[HEIGHT][WIDTH * 3];


void setup()
{
	mapChars();
	Tlc.init();
	initRows();
	//digitalWrite(2, HIGH);
	//Tlc.setAll(2000);
	Tlc.update();
	initPixels();
	//pixelTest();
	setPixel(3, 4, 1000);
	setPixel(2, 2, 0, 0, 4000);

}

void loop()
{

	//setColor(GREEN, 100);
	//ledTest();
	//flasher(4000);
	/*pulser();
	flasher(4000);
	ledTest(4000);*/
	//drawCharacter(CHARACTER_M,1000,0,0);
	//animateString("HI CHRIS");
	/*refreshScreen();
	animateString(CHARACTER_K, 1000, 2000, 50);
	animateString(CHARACTER_Y, 1000, 2000, 50);
	animateString(CHARACTER_L, 1000, 2000, 50);
	animateString(CHARACTER_E, 1000, 2000, 50);*/
	//fader();
}

void animateString(int thischar[], int r, int g, int b)
{

	for (int i = 0; i<1; i++)
	{
		int timer = 0;

		while (timer<100)
		{
			drawCharacter(thischar, r, g, b);
			refreshScreen();
			
			timer++;
		}
	}

}

void drawCharacter(int pixelMap[], int r, int g, int b)
{
	int index = 0;
	for (int i = 0; i<HEIGHT; i++)
	{
		for (int j = 0; j<WIDTH; j++)
		{
			if (pixelMap[index] == 1)
			{
				setPixel(j, i, r, g, b);
			}
			else{
				setPixel(j, i, 0);
			}
			index++;
		}
	}
}

void setPixel(int x, int y, int b)
{
	setPixel(x, y, b, b, b);
}

void setPixel(int x, int y, int r, int g, int b)
{
	x = 4 - x;
	pixels[y][(x * 3) + RED] = r;
	pixels[y][(x * 3) + GREEN] = g;
	pixels[y][(x * 3) + BLUE] = b;
}

void pixelTest()
{
	for (int i = 0; i<HEIGHT; i++)
	{
		for (int j = 0; j<(WIDTH * 3); j++)
		{
			pixels[i][j] = 3000;
			refreshScreen();
			int timer = 0;
			while (timer < 100)
			{
				timer++;
				refreshScreen();
			}
		}
	}
}

void initPixels()
{
	for (int i = 0; i<(HEIGHT); i++)
	{
		for (int j = 0; j<(WIDTH * 3); j++)
		{
			pixels[i][j] = 0;
		}
	}
}

void refreshScreen()
{

	for (int i = 0; i < HEIGHT + 1; i++)
	{
		disableRows();

		for (int j = 0; j < 15; j++)
		{
			Tlc.set(j, pixels[i][j]);
		}

		while (Tlc.update());
		digitalWrite(rows[i - 1], HIGH);
		delayMicroseconds(100);
	}


}

void ledTest(int brightness)
{
	int dly = 200;
	disableRows();
	Tlc.clear();
	while (Tlc.update());

	for (int i = 0; i < HEIGHT; i++)
	{
		digitalWrite(rows[i], HIGH);
		for (int j = 0; j < (WIDTH * 3); j++)
		{
			Tlc.clear();
			Tlc.set(j, brightness);
			while (Tlc.update());
			delay(dly);
		}
		digitalWrite(rows[i], LOW);
	}
}

void flasher(int brightness)
{
	for (int i = 0; i < WIDTH; i++)
	{
		if (i > 0)
		{
			digitalWrite(rows[i - 1], LOW);
		}
		else
		{
			digitalWrite(rows[WIDTH - 1], LOW);
		}
		Tlc.clear();
		for (int j = counter % 3; j < 24; j += 3)
		{
			Tlc.set(j, brightness);
		}
		digitalWrite(rows[i], HIGH);
		while (Tlc.update());
		timer++;
		if (timer == interval)
		{
			interval--;
			counter++;
			timer = 0;
		}

	}
}

/// <summary>
/// Sets all the LEDs in the matrix to the specified color and brightness.
/// </summary>
/// <param name="color"></param>
/// <param name="brightness"></param>
void setColor(int color, int brightness)
{
	for (int i = 0; i < WIDTH; i++)
	{
		if (i > 0)
		{
			digitalWrite(rows[i - 1], LOW);
		}
		else
		{
			digitalWrite(rows[WIDTH - 1], LOW);
		}
		Tlc.clear();
		for (int j = color; j < 24; j += 3)
		{
			Tlc.set(j, brightness);
		}
		digitalWrite(rows[i], HIGH);

		while (Tlc.update());
	}
}

/// <summary>
/// A pulsing brightness effect
/// </summary>
void pulser()
{
	for (int j = 0; j < 3; j++)
	{
		float brightness = 0;

		for (float i = .0f; i < PI - .0f; i += 0.01)
		{
			setColor(j, sin(i) * (4000.0f));
		}
	}

}

void fader()
{
	int rfade = 200;
	int gfade = 200;
	int bfade = 200;
	int rfactor = 2;
	int gfactor = 2;
	int bfactor = 2;

	while (true)
	{
		rfade += random(-rfactor, rfactor + 1);
		gfade += random(-gfactor, gfactor + 1);
		bfade += random(-bfactor, bfactor + 1);

		setInBounds(&rfade, 0, 4095);
		setInBounds(&gfade, 0, 4095);
		setInBounds(&bfade, 0, 4095);


		setColor(RED, rfade);
		setColor(GREEN, gfade);
		setColor(BLUE, bfade);

		//rfactor += random(-2,8);
		//gfactor += random(-2,2);
		//bfactor += random(-7,2);
	}
}

void setInBounds(int* number, int bound1, int bound2)
{
	int num = *number;
	if (num < bound1)
	{
		*number = bound1;
	}

	if (num > bound2)
	{
		*number = bound2;
	}
}

void initRows()
{
	for (int i = 0; i < HEIGHT; i++)
	{
		pinMode(rows[i], OUTPUT);
	}
	disableRows();
}

void disableRows()
{
	for (int i = 0; i < HEIGHT; i++)
	{
		digitalWrite(rows[i], LOW);
	}
}

void mapChars()
{
	character[65] = CHARACTER_A;
	character[66] = CHARACTER_B;
	character[67] = CHARACTER_C;
	character[68] = CHARACTER_D;
	character[69] = CHARACTER_E;
	character[70] = CHARACTER_F;
	character[71] = CHARACTER_G;
	character[72] = CHARACTER_H;
	character[73] = CHARACTER_H;
	character[74] = CHARACTER_J;
	character[75] = CHARACTER_K;
	character[76] = CHARACTER_L;
	character[77] = CHARACTER_M;
	character[78] = CHARACTER_N;
	character[79] = CHARACTER_O;
	character[80] = CHARACTER_P;
	character[81] = CHARACTER_Q;
	character[82] = CHARACTER_R;
	character[83] = CHARACTER_S;
	character[84] = CHARACTER_T;
	character[85] = CHARACTER_U;
	character[86] = CHARACTER_V;
	character[87] = CHARACTER_W;
	character[88] = CHARACTER_X;
	character[89] = CHARACTER_Y;
	character[90] = CHARACTER_Z;
}
