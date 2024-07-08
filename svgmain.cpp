#include <iostream>
#include "svg.h"
#include <fstream>
#include <string>
using namespace std;



int main()
{
    int top_leftx;
    int top_lefty;

    cout << "Indtast koordinatet for pyramiden" << endl<<endl;
    cin >> top_leftx;
    cin >> top_lefty;
    

    int height;
    int width;
    cout << "Indtast stor pyramiden skal være(max 200)"<<endl<<endl;
    cin >> height;
    cin >> width;


    // draw two circles
  /* string shapes = draw_circle(000, 000, 000, "#9028bd", "green")
        + draw_circle(000, 000, 00, "#9028bd", "green")
        + draw_rectangle(150, 50, 15, 200, "#C75075", "green")
        + draw_rectangle(200, 100, 15, 150, "#C75075", "green")
        + draw_rectangle(250, 125, 15, 125, "#C75075", "green")
        + draw_rectangle(300, 150, 15, 100, "#C75075", "green")
        + draw_rectangle(350, 225, 15, 25, "#C75075", "green")
        + draw_line(400, 250, 100, 250, "#77C750", "green")
        + draw_line(100, 250, 100, 50, "#77C750", "green")
        + draw_triangle(500, 500, 450, 450, 350, 100, "#0b03fc", "green")
        + draw_triangle(500, 500, 450, 450, 350, 100, "#0b03fc", "green")*/

    //-3*højde, -1/2*bredde
        //row 1
    string shapes = draw_rectangle(top_leftx + 100, top_lefty, width, height, "#C75075", "green")
        //row 2
        + draw_rectangle(top_leftx + 200, top_lefty + 200, width, height, "#C75075", "green")
        + draw_rectangle(top_leftx, top_lefty + 200, width, height, "#C75075", "green")
        //row 3
        + draw_rectangle(top_leftx - 100, top_lefty + 400, width, height, "#C75075", "green")
        + draw_rectangle(top_leftx + 100, top_lefty + 400, width, height, "#C75075", "green")
        + draw_rectangle(top_leftx + 300, top_lefty + 400, width, height, "#C75075", "green")

        + draw_line(top_leftx+200, top_lefty, width*-1/128, height*3.5, "#77C750", "green")
        + draw_line(top_leftx + 200, top_lefty, width * 1 / 128, height * 3.5, "#77C750", "green");
    

    // save the drawing to file 'test.svg'
    save(draw_svg(800, 800, shapes), "test.svg");

    
    return 0;
}
