#include "Poo.h"
#include "Graphics.h"

Poo::Poo(int in_x, int in_y, int in_vx, int in_vy)
{
	x = in_x;
	y = in_y;
	vx = in_vx;
	vy = in_vy;
}

void Poo::Update()
{
	x += vx;
	y += vy;

	const int right = x + width;
	if( x < 0 )
	{
		x = 0;
		vx = -vx;
	}
	else if( right >= Graphics::ScreenWidth )
	{
		x = (Graphics::ScreenWidth - 1) - width;
		vx = -vx;
	}

	const int bottom = y + height;
	if( y < 0 )
	{
		y = 0;
		vy = -vy;
	}
	else if( bottom >= Graphics::ScreenHeight )
	{
		y = (Graphics::ScreenHeight - 1) - height;
		vy = -vy;
	}
}

void Poo::ProcessConsumption( const Dude& dude )
{
	const int duderight = dude.GetX() + dude.GetWidth();
	const int dudebottom = dude.GetY() + dude.GetHeight();
	const int pooright = x + width;
	const int poobottom = y + height;

	if( duderight >= x &&
		dude.GetX() <= pooright &&
		dudebottom >= y &&
		dude.GetY() <= poobottom )
	{
		isEaten = true;
	}
}

void Poo::Draw( Graphics& gfx ) const
{
	gfx.PutPixel(14 + x, 5 + y, 0, 249, 62);
	gfx.PutPixel(15 + x, 5 + y, 0, 249, 62);
	gfx.PutPixel(16 + x, 5 + y, 0, 249, 62);
	gfx.PutPixel(17 + x, 5 + y, 0, 249, 62);
	gfx.PutPixel(13 + x, 6 + y, 0, 249, 62);
	gfx.PutPixel(14 + x, 6 + y, 0, 249, 62);
	gfx.PutPixel(15 + x, 6 + y, 0, 249, 238);
	gfx.PutPixel(16 + x, 6 + y, 0, 249, 238);
	gfx.PutPixel(17 + x, 6 + y, 0, 249, 62);
	gfx.PutPixel(18 + x, 6 + y, 0, 249, 62);
	gfx.PutPixel(12 + x, 7 + y, 0, 249, 62);
	gfx.PutPixel(13 + x, 7 + y, 0, 249, 62);
	gfx.PutPixel(14 + x, 7 + y, 0, 249, 238);
	gfx.PutPixel(15 + x, 7 + y, 0, 249, 238);
	gfx.PutPixel(16 + x, 7 + y, 0, 249, 238);
	gfx.PutPixel(17 + x, 7 + y, 0, 249, 238);
	gfx.PutPixel(18 + x, 7 + y, 0, 249, 62);
	gfx.PutPixel(19 + x, 7 + y, 0, 249, 62);
	gfx.PutPixel(11 + x, 8 + y, 0, 249, 62);
	gfx.PutPixel(12 + x, 8 + y, 0, 249, 62);
	gfx.PutPixel(13 + x, 8 + y, 0, 249, 238);
	gfx.PutPixel(14 + x, 8 + y, 0, 249, 238);
	gfx.PutPixel(15 + x, 8 + y, 26, 0, 249);
	gfx.PutPixel(16 + x, 8 + y, 26, 0, 249);
	gfx.PutPixel(17 + x, 8 + y, 0, 249, 238);
	gfx.PutPixel(18 + x, 8 + y, 0, 249, 238);
	gfx.PutPixel(19 + x, 8 + y, 0, 249, 62);
	gfx.PutPixel(20 + x, 8 + y, 0, 249, 62);
	gfx.PutPixel(10 + x, 9 + y, 0, 249, 62);
	gfx.PutPixel(11 + x, 9 + y, 0, 249, 62);
	gfx.PutPixel(12 + x, 9 + y, 0, 249, 238);
	gfx.PutPixel(13 + x, 9 + y, 0, 249, 238);
	gfx.PutPixel(14 + x, 9 + y, 26, 0, 249);
	gfx.PutPixel(15 + x, 9 + y, 26, 0, 249);
	gfx.PutPixel(16 + x, 9 + y, 26, 0, 249);
	gfx.PutPixel(17 + x, 9 + y, 26, 0, 249);
	gfx.PutPixel(18 + x, 9 + y, 0, 249, 238);
	gfx.PutPixel(19 + x, 9 + y, 0, 249, 238);
	gfx.PutPixel(20 + x, 9 + y, 0, 249, 62);
	gfx.PutPixel(21 + x, 9 + y, 0, 249, 62);
	gfx.PutPixel(10 + x, 10 + y, 0, 249, 62);
	gfx.PutPixel(11 + x, 10 + y, 0, 249, 238);
	gfx.PutPixel(12 + x, 10 + y, 0, 249, 238);
	gfx.PutPixel(13 + x, 10 + y, 26, 0, 249);
	gfx.PutPixel(14 + x, 10 + y, 26, 0, 249);
	gfx.PutPixel(15 + x, 10 + y, 180, 0, 249);
	gfx.PutPixel(16 + x, 10 + y, 180, 0, 249);
	gfx.PutPixel(17 + x, 10 + y, 26, 0, 249);
	gfx.PutPixel(18 + x, 10 + y, 26, 0, 249);
	gfx.PutPixel(19 + x, 10 + y, 0, 249, 238);
	gfx.PutPixel(20 + x, 10 + y, 0, 249, 238);
	gfx.PutPixel(21 + x, 10 + y, 0, 249, 62);
	gfx.PutPixel(10 + x, 11 + y, 0, 249, 62);
	gfx.PutPixel(11 + x, 11 + y, 0, 249, 238);
	gfx.PutPixel(12 + x, 11 + y, 26, 0, 249);
	gfx.PutPixel(13 + x, 11 + y, 26, 0, 249);
	gfx.PutPixel(14 + x, 11 + y, 180, 0, 249);
	gfx.PutPixel(15 + x, 11 + y, 180, 0, 249);
	gfx.PutPixel(16 + x, 11 + y, 180, 0, 249);
	gfx.PutPixel(17 + x, 11 + y, 180, 0, 249);
	gfx.PutPixel(18 + x, 11 + y, 26, 0, 249);
	gfx.PutPixel(19 + x, 11 + y, 26, 0, 249);
	gfx.PutPixel(20 + x, 11 + y, 0, 249, 238);
	gfx.PutPixel(21 + x, 11 + y, 0, 249, 62);
	gfx.PutPixel(10 + x, 12 + y, 0, 249, 62);
	gfx.PutPixel(11 + x, 12 + y, 0, 249, 238);
	gfx.PutPixel(12 + x, 12 + y, 26, 0, 249);
	gfx.PutPixel(13 + x, 12 + y, 180, 0, 249);
	gfx.PutPixel(14 + x, 12 + y, 180, 0, 249);
	gfx.PutPixel(15 + x, 12 + y, 97, 1, 1);
	gfx.PutPixel(16 + x, 12 + y, 97, 1, 1);
	gfx.PutPixel(17 + x, 12 + y, 180, 0, 249);
	gfx.PutPixel(18 + x, 12 + y, 180, 0, 249);
	gfx.PutPixel(19 + x, 12 + y, 26, 0, 249);
	gfx.PutPixel(20 + x, 12 + y, 0, 249, 238);
	gfx.PutPixel(21 + x, 12 + y, 0, 249, 62);
	gfx.PutPixel(10 + x, 13 + y, 0, 249, 62);
	gfx.PutPixel(11 + x, 13 + y, 0, 249, 238);
	gfx.PutPixel(12 + x, 13 + y, 26, 0, 249);
	gfx.PutPixel(13 + x, 13 + y, 180, 0, 249);
	gfx.PutPixel(14 + x, 13 + y, 97, 1, 1);
	gfx.PutPixel(15 + x, 13 + y, 97, 1, 1);
	gfx.PutPixel(16 + x, 13 + y, 97, 1, 1);
	gfx.PutPixel(17 + x, 13 + y, 97, 1, 1);
	gfx.PutPixel(18 + x, 13 + y, 180, 0, 249);
	gfx.PutPixel(19 + x, 13 + y, 26, 0, 249);
	gfx.PutPixel(20 + x, 13 + y, 0, 249, 238);
	gfx.PutPixel(21 + x, 13 + y, 0, 249, 62);
	gfx.PutPixel(10 + x, 14 + y, 0, 249, 62);
	gfx.PutPixel(11 + x, 14 + y, 0, 249, 238);
	gfx.PutPixel(12 + x, 14 + y, 26, 0, 249);
	gfx.PutPixel(13 + x, 14 + y, 180, 0, 249);
	gfx.PutPixel(14 + x, 14 + y, 97, 1, 1);
	gfx.PutPixel(15 + x, 14 + y, 97, 1, 1);
	gfx.PutPixel(16 + x, 14 + y, 97, 1, 1);
	gfx.PutPixel(17 + x, 14 + y, 97, 1, 1);
	gfx.PutPixel(18 + x, 14 + y, 180, 0, 249);
	gfx.PutPixel(19 + x, 14 + y, 26, 0, 249);
	gfx.PutPixel(20 + x, 14 + y, 0, 249, 238);
	gfx.PutPixel(21 + x, 14 + y, 0, 249, 62);
	gfx.PutPixel(10 + x, 15 + y, 0, 249, 62);
	gfx.PutPixel(11 + x, 15 + y, 0, 249, 238);
	gfx.PutPixel(12 + x, 15 + y, 26, 0, 249);
	gfx.PutPixel(13 + x, 15 + y, 180, 0, 249);
	gfx.PutPixel(14 + x, 15 + y, 97, 1, 1);
	gfx.PutPixel(15 + x, 15 + y, 97, 1, 1);
	gfx.PutPixel(16 + x, 15 + y, 97, 1, 1);
	gfx.PutPixel(17 + x, 15 + y, 97, 1, 1);
	gfx.PutPixel(18 + x, 15 + y, 180, 0, 249);
	gfx.PutPixel(19 + x, 15 + y, 26, 0, 249);
	gfx.PutPixel(20 + x, 15 + y, 0, 249, 238);
	gfx.PutPixel(21 + x, 15 + y, 0, 249, 62);
	gfx.PutPixel(10 + x, 16 + y, 0, 249, 62);
	gfx.PutPixel(11 + x, 16 + y, 0, 249, 238);
	gfx.PutPixel(12 + x, 16 + y, 26, 0, 249);
	gfx.PutPixel(13 + x, 16 + y, 180, 0, 249);
	gfx.PutPixel(14 + x, 16 + y, 97, 1, 1);
	gfx.PutPixel(15 + x, 16 + y, 97, 1, 1);
	gfx.PutPixel(16 + x, 16 + y, 97, 1, 1);
	gfx.PutPixel(17 + x, 16 + y, 97, 1, 1);
	gfx.PutPixel(18 + x, 16 + y, 180, 0, 249);
	gfx.PutPixel(19 + x, 16 + y, 26, 0, 249);
	gfx.PutPixel(20 + x, 16 + y, 0, 249, 238);
	gfx.PutPixel(21 + x, 16 + y, 0, 249, 62);
	gfx.PutPixel(10 + x, 17 + y, 0, 249, 62);
	gfx.PutPixel(11 + x, 17 + y, 0, 249, 238);
	gfx.PutPixel(12 + x, 17 + y, 26, 0, 249);
	gfx.PutPixel(13 + x, 17 + y, 180, 0, 249);
	gfx.PutPixel(14 + x, 17 + y, 97, 1, 1);
	gfx.PutPixel(15 + x, 17 + y, 97, 1, 1);
	gfx.PutPixel(16 + x, 17 + y, 97, 1, 1);
	gfx.PutPixel(17 + x, 17 + y, 97, 1, 1);
	gfx.PutPixel(18 + x, 17 + y, 180, 0, 249);
	gfx.PutPixel(19 + x, 17 + y, 26, 0, 249);
	gfx.PutPixel(20 + x, 17 + y, 0, 249, 238);
	gfx.PutPixel(21 + x, 17 + y, 0, 249, 62);
	gfx.PutPixel(10 + x, 18 + y, 0, 249, 62);
	gfx.PutPixel(11 + x, 18 + y, 0, 249, 238);
	gfx.PutPixel(12 + x, 18 + y, 26, 0, 249);
	gfx.PutPixel(13 + x, 18 + y, 180, 0, 249);
	gfx.PutPixel(14 + x, 18 + y, 97, 1, 1);
	gfx.PutPixel(15 + x, 18 + y, 97, 1, 1);
	gfx.PutPixel(16 + x, 18 + y, 97, 1, 1);
	gfx.PutPixel(17 + x, 18 + y, 97, 1, 1);
	gfx.PutPixel(18 + x, 18 + y, 180, 0, 249);
	gfx.PutPixel(19 + x, 18 + y, 26, 0, 249);
	gfx.PutPixel(20 + x, 18 + y, 0, 249, 238);
	gfx.PutPixel(21 + x, 18 + y, 0, 249, 62);
	gfx.PutPixel(10 + x, 19 + y, 0, 249, 62);
	gfx.PutPixel(11 + x, 19 + y, 0, 249, 238);
	gfx.PutPixel(12 + x, 19 + y, 26, 0, 249);
	gfx.PutPixel(13 + x, 19 + y, 180, 0, 249);
	gfx.PutPixel(14 + x, 19 + y, 180, 0, 249);
	gfx.PutPixel(15 + x, 19 + y, 97, 1, 1);
	gfx.PutPixel(16 + x, 19 + y, 97, 1, 1);
	gfx.PutPixel(17 + x, 19 + y, 180, 0, 249);
	gfx.PutPixel(18 + x, 19 + y, 180, 0, 249);
	gfx.PutPixel(19 + x, 19 + y, 26, 0, 249);
	gfx.PutPixel(20 + x, 19 + y, 0, 249, 238);
	gfx.PutPixel(21 + x, 19 + y, 0, 249, 62);
	gfx.PutPixel(10 + x, 20 + y, 0, 249, 62);
	gfx.PutPixel(11 + x, 20 + y, 0, 249, 238);
	gfx.PutPixel(12 + x, 20 + y, 26, 0, 249);
	gfx.PutPixel(13 + x, 20 + y, 26, 0, 249);
	gfx.PutPixel(14 + x, 20 + y, 180, 0, 249);
	gfx.PutPixel(15 + x, 20 + y, 180, 0, 249);
	gfx.PutPixel(16 + x, 20 + y, 180, 0, 249);
	gfx.PutPixel(17 + x, 20 + y, 180, 0, 249);
	gfx.PutPixel(18 + x, 20 + y, 26, 0, 249);
	gfx.PutPixel(19 + x, 20 + y, 26, 0, 249);
	gfx.PutPixel(20 + x, 20 + y, 0, 249, 238);
	gfx.PutPixel(21 + x, 20 + y, 0, 249, 62);
	gfx.PutPixel(10 + x, 21 + y, 0, 249, 62);
	gfx.PutPixel(11 + x, 21 + y, 0, 249, 238);
	gfx.PutPixel(12 + x, 21 + y, 0, 249, 238);
	gfx.PutPixel(13 + x, 21 + y, 26, 0, 249);
	gfx.PutPixel(14 + x, 21 + y, 26, 0, 249);
	gfx.PutPixel(15 + x, 21 + y, 180, 0, 249);
	gfx.PutPixel(16 + x, 21 + y, 180, 0, 249);
	gfx.PutPixel(17 + x, 21 + y, 26, 0, 249);
	gfx.PutPixel(18 + x, 21 + y, 26, 0, 249);
	gfx.PutPixel(19 + x, 21 + y, 0, 249, 238);
	gfx.PutPixel(20 + x, 21 + y, 0, 249, 238);
	gfx.PutPixel(21 + x, 21 + y, 0, 249, 62);
	gfx.PutPixel(10 + x, 22 + y, 0, 249, 62);
	gfx.PutPixel(11 + x, 22 + y, 0, 249, 62);
	gfx.PutPixel(12 + x, 22 + y, 0, 249, 238);
	gfx.PutPixel(13 + x, 22 + y, 0, 249, 238);
	gfx.PutPixel(14 + x, 22 + y, 26, 0, 249);
	gfx.PutPixel(15 + x, 22 + y, 26, 0, 249);
	gfx.PutPixel(16 + x, 22 + y, 26, 0, 249);
	gfx.PutPixel(17 + x, 22 + y, 26, 0, 249);
	gfx.PutPixel(18 + x, 22 + y, 0, 249, 238);
	gfx.PutPixel(19 + x, 22 + y, 0, 249, 238);
	gfx.PutPixel(20 + x, 22 + y, 0, 249, 62);
	gfx.PutPixel(21 + x, 22 + y, 0, 249, 62);
	gfx.PutPixel(11 + x, 23 + y, 0, 249, 62);
	gfx.PutPixel(12 + x, 23 + y, 0, 249, 62);
	gfx.PutPixel(13 + x, 23 + y, 0, 249, 238);
	gfx.PutPixel(14 + x, 23 + y, 0, 249, 238);
	gfx.PutPixel(15 + x, 23 + y, 26, 0, 249);
	gfx.PutPixel(16 + x, 23 + y, 26, 0, 249);
	gfx.PutPixel(17 + x, 23 + y, 0, 249, 238);
	gfx.PutPixel(18 + x, 23 + y, 0, 249, 238);
	gfx.PutPixel(19 + x, 23 + y, 0, 249, 62);
	gfx.PutPixel(20 + x, 23 + y, 0, 249, 62);
	gfx.PutPixel(12 + x, 24 + y, 0, 249, 62);
	gfx.PutPixel(13 + x, 24 + y, 0, 249, 62);
	gfx.PutPixel(14 + x, 24 + y, 0, 249, 238);
	gfx.PutPixel(15 + x, 24 + y, 0, 249, 238);
	gfx.PutPixel(16 + x, 24 + y, 0, 249, 238);
	gfx.PutPixel(17 + x, 24 + y, 0, 249, 238);
	gfx.PutPixel(18 + x, 24 + y, 0, 249, 62);
	gfx.PutPixel(19 + x, 24 + y, 0, 249, 62);
	gfx.PutPixel(13 + x, 25 + y, 0, 249, 62);
	gfx.PutPixel(14 + x, 25 + y, 0, 249, 62);
	gfx.PutPixel(15 + x, 25 + y, 0, 249, 238);
	gfx.PutPixel(16 + x, 25 + y, 0, 249, 238);
	gfx.PutPixel(17 + x, 25 + y, 0, 249, 62);
	gfx.PutPixel(18 + x, 25 + y, 0, 249, 62);
	gfx.PutPixel(14 + x, 26 + y, 0, 249, 62);
	gfx.PutPixel(15 + x, 26 + y, 0, 249, 62);
	gfx.PutPixel(16 + x, 26 + y, 0, 249, 62);
	gfx.PutPixel(17 + x, 26 + y, 0, 249, 62);
	gfx.PutPixel(15 + x, 27 + y, 0, 249, 62);
	gfx.PutPixel(16 + x, 27 + y, 0, 249, 62);

}

bool Poo::IsEaten() const
{
	return isEaten;
}
