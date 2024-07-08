#pragma once
#ifndef SVG_H_INCLUDED
#define SVG_H_INCLUDED
#include <iostream>

using namespace std;

/**
 * Takes a canvas size (width and height) and a string representing
 * SVG shapes, and adds the necessary header and footer to make a
 * proper SVG image.
 *
 * Example: draw_svg(20, 20, draw_circle(10, 10, 5));
 */
string draw_svg(int width, int height, string shapes);

/**
 * Takes a string representing an SVG image, including header and footer
 * as created by draw_svg, and saves it to a file determined by the given
 * filename (should probably end in .svg).
 *
 * Example: save(draw_svg(20, 20, draw_circle(10, 10, 5)));
 */
void save(string svg, string filename);

/**
 * Creates a string representing the circle with its center in (x, y) and
 * the given radius.
 */



string draw_circle(int x, int y, int radius, string color, string stroke_color);

/**
 * Creates a string representing the rectangle with its upper left corner
 * in (x, y) and size given by width and height.
 */
string draw_rectangle(int x, int y, int width, int height, string color, string stroke_color);

/**
 * Creates a string representing the line with one endpoint in (x1, y1),
 * and the other in (x2, y2).
 */
string draw_line(int x1, int y1, int x2, int y2, string color, string stroke_color);


string draw_triangle(int x1, int y1, int x2, int y2, int x3, int y3, string color, string stroke_color);
#endif // SVG_H_INCLUDED

