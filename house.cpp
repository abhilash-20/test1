#include<iostream>
using namespace std;

void drawcone(int height);
void drawHorizontalLine(int numXs);
void draw2VerticalLines(int numSpaces, int numRows);
void drawOneRow(int numSpaces);
void getDimensions(int& width, int& height);
void drawbox(int width, int height);

int main(){

int width;
int height;

    getDimensions(height, width);
    drawcone(height);
    drawHorizontalLine(width);    
    draw2VerticalLines(width - 2, height - 2);   
    drawHorizontalLine(width);



return 0;
}

void drawbox(int width, int height){

    drawHorizontalLine(width);    
    draw2VerticalLines(width - 2, height - 2);   
    drawHorizontalLine(width);

}

void drawcone(int height){

    int base = height * 2;

    int r = 0;

    while ( r != height){

        int c = 0;
        while (c != base){

            if(c==height-r || c==height+r)
                cout << "X";
            else
            cout << " ";
            c++;

}
    cout << endl;
    r++;
}
}

void drawHorizontalLine(int numXs)
    {               
        int count;

        for (count = 0; count < numXs; count++){
            cout << "X";
        }
        cout << endl;
    }


void draw2VerticalLines(int numSpaces, int numRows)
    {                          
        int rowCount;

        for (rowCount = 0; rowCount < numRows; rowCount++){
            drawOneRow(numSpaces);
        }
    }

void drawOneRow(int numSpaces)
    {
        int spaceCount;

        cout << "X";
        for (spaceCount = 0; spaceCount < numSpaces; spaceCount++){    
            cout << " ";
        }
        cout << "X" << endl;
    }

void getDimensions(int& width, int& height){

cout << "Enter the width of the house" << endl;
cin >> width;

cout << "Enter the height of the house" << endl;
cin >> height;

}