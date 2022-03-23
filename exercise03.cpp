#include <iostream>

using namespace std;

int volume(int height, int width, int length);

struct Box{
 int Height;
 int Width;
 int Length;
};

int main() {
    struct Box box1;
    struct Box box2;
    int totalVolume;
    
  
    cout << "Enter Box 1 Height : ";
    cin >> box1.Height;
    cout << "Enter Box 1 Width : ";
    cin >> box1.Width;
    cout << "Enter Box 1 Length : ";
    cin >> box1.Length;
  

    cout << "Enter Box 2 Height : ";
    cin >> box2.Height;
    cout << "Enter Box 2 Width : ";
    cin >> box2.Width;
    cout << "Enter Box 2 Length : ";
    cin >> box2.Length;
    
   
    totalVolume = volume(box1.Height, box1.Width, box1.Length )
             + volume( box2.Height, box2.Width, box2.Length );
    
    cout << "Volume of Box is " << totalVolume << endl;
    
    return 0;
}

// Implement the functions here
int volume (int height, int width , int length)
{
  int Bvolume;
  Bvolume = height * width * length ;
  return Bvolume;
}
