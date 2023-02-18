#include <iostream>
#include <cmath>

struct point
{
    double x;
    double y;
};


double getDistance(point&, point&);
void printPoint(point&);
void printDistance(point&, point&);
void nearestPair(point[], int);

int main()
{
    const int NUMBER_OF_POINTS = 8;
    point pointsArray[NUMBER_OF_POINTS];

    std::cout <<"Enter " << NUMBER_OF_POINTS << " points: ";
    for (int i = 0; i < NUMBER_OF_POINTS; i++)
        std::cin >> pointsArray[i].x >> pointsArray[i].y;

    for (int i = 0; i < NUMBER_OF_POINTS; i++){
        printPoint(pointsArray[i]);
    }

    // printDistance(pointsArray[0], pointsArray[1]);
    nearestPair(pointsArray, NUMBER_OF_POINTS);

    return 0;
}

void printPoint(point& p)
{
    std::cout << "The point is ("  << p.x << ", " << p.y << ")" << std::endl;
}

double getDistance(point& p1, point& p2)
{
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

void printDistance(point& p1, point& p2)
{
    double distance = getDistance(p1, p2);
    std::cout << "The distance between points is " << distance << " units." << std::endl;
}

void nearestPair(point pointsArray[], int size){
    int p1 = 0;
    int p2 = 1;
    double shortestDistance = getDistance(pointsArray[0], pointsArray[1]);

    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            double tempDistance = getDistance(pointsArray[i], pointsArray[j]);
            if (tempDistance < shortestDistance)
            {
                p1 = i;
                p2 = j;
                shortestDistance = tempDistance;
            }
        }
    }

    std::cout << "The clodest two points are: " << std::endl;
    printPoint(pointsArray[p1]);
    printPoint(pointsArray[p2]);
    printDistance(pointsArray[p1], pointsArray[p2]);
}