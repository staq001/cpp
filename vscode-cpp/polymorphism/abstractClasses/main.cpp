#include <iostream>
#include <vector>

// abstract classes
  // 1.) cannot instantiate objects.
  // 2.) used as base classes in inheritance hierarchies.
  // 3.) often referred to as abstract base classes.

// the ones we''ve beem using all along are called *Concrete Classess* i.e all their memeber functions are defined and are used to instantiate objects.

// if we dont override methods created by the Base class in our Derived class, the Derived class also becomes abstract, automatically.

class Shape {
  private:
    // attributes commin to all shapes;

  public:
    virtual void draw() = 0;
    virtual void rotate() = 0;
    virtual ~Shape(){}
};

class Open_Shape: public Shape{
  public:
    virtual ~Open_Shape() {};
};

class Closed_Shape: public Shape{
  public:
    virtual ~Closed_Shape() {};
};


class Line: public Open_Shape{
  public:

    virtual void draw() override{
      std::cout << "Drawing a line" << std::endl;
    }

    virtual void rotate ()override{
      std::cout << "Rotating a line" << std::endl;
    }

    virtual ~Line() {};
};

class Circle: public Closed_Shape{
  public:

    virtual void draw() override{
      std::cout << "Drawing a circle" << std::endl;
    }

    virtual void rotate ()override{
      std::cout << "Rotating a circle" << std::endl;
    }

    virtual ~Circle() {};
};

class Square:public Closed_Shape{

public:
  virtual void draw() override
  {
    std::cout << "Drawing a square" << std::endl;
  }

  virtual void rotate() override
  {
    std::cout << "Rotating a square" << std::endl;
  }

  virtual ~Square() {};
};

void screen_refresh(const std::vector<Shape*>& shapes) {
  std::cout << "Refreshing" << std::endl;
  for (const auto shape : shapes) {
    shape->draw();
  }
}


int main(){
  // Shape s; // cannot instantiate abstract class;

  // Circle c;
  // c.draw();

  // Shape *ptr = new Circle();
  
  // ptr->draw();
  // ptr->rotate();

  Shape *s1 = new Circle;
  Shape *s2 = new Line;
  Shape *s3 = new Square;

  std::vector<Shape*> shapes = {s1, s2, s3};

  screen_refresh(shapes);

  delete s1;
  delete s2;
  delete s3;
  return 0;
}