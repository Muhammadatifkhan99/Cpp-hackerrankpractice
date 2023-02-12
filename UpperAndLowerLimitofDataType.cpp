#include <iostream>

using namespace std;
/*
 * Create classes Rectangle and RectangleArea
 */
class Rectangle {
	public:
		int h;
		int w;
		
	void display (){
		cout<<h<<" "<<w<<endl;
	}
};
class RectangleArea : public Rectangle {
	public:
	int read_input (){
		cin>>h>>w;
	}
	void display (){
		cout<<h*w<<endl;
	}
};

int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;
    
    /*
     * Read the width and height
     */
    r_area.read_input();
    
    /*
     * Print the width and height
     */
    r_area.Rectangle::display();
    
    /*
     * Print the area
     */
    r_area.display();
    
    return 0;
}
