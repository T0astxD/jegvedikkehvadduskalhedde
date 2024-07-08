#include "svg.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

string style =  "stroke-width='3px' opacity='0.3'";



string draw_svg(int width, int height, string shapes) {
    string header =
        string("<svg ") + "xmlns='http://www.w3.org/2000/svg' "                 // mandatory namespace info
        + "xmlns:xlink='http://www.w3.org/1999/xlink' "         // mandatory namespace info

        + "width='"                                             // setting the width to make sure the
        + to_string(width)                                      // picture doesn't get scaled weirdly.

        + "' viewBox='0 0 "                                     // defines a viewport, that is, the
        + to_string(width)                                      // upper left corner + size of the
        + " "                                                   // image.
        + to_string(height)
     

        + "'>";

    string footer = "</svg>";
    return header + shapes + footer;
}

void save(string svg, string filename) {
    ofstream file;
    file.open(filename);
    file << svg;
    file.close();

    cout << "SAVED FILE: " << filename << endl;
}



string draw_circle(int x, int y, int radius, string color, string stroke_color) {
    return "<circle cx='" + to_string(x)
        + "' cy='" + to_string(y)
        + "' r='" + to_string(radius)
        + "' fill='" + color
        + "' stroke='" + stroke_color
        + "' " + style
        + " />";
}

string draw_rectangle(int x, int y, int width, int height, string color, string stroke_color) {
    return "<rect x='"+to_string(x)
        +"' y='"+to_string(y)
        +"' width='"+to_string(width)
        +"' height='"+to_string(height)
        + "' stroke='" + stroke_color
        + "' fill='" + color
        +"' "+style
        +" />";
}

string draw_line(int x1, int y1, int x2, int y2, string color, string stroke_color) {
    return "<line x1='" + to_string(x1)
        + "' y1='" + to_string(y1)
        + "' x2='" + to_string(x2)
        + "' y2='" + to_string(y2)
        + "' stroke='" + stroke_color
        + "' fill='" + color
        + "' " + style
        + " />";
}

string draw_triangle(int x1, int y1, int x2, int y2, int x3, int y3, string color, string stroke_color) {
    return "<polygon points='"
        + to_string(x1) + ","
        + to_string(y1) + " "
        + to_string(x2) + ","
        + to_string(y2) + " "
        + to_string(x3) + ","
        + to_string(y3)

        + "' stroke='" + stroke_color
        + "' fill='" + color
        + "' " + style
        + " />";
}

