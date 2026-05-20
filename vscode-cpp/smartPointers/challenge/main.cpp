#include <iostream>
#include <memory>
#include <vector>

using namespace std;

class Test
{
private:
  int data;

public:
  Test() : data(0) { std::cout << "Test constructor {" << data << "}" << std::endl; }
  Test(int data) : data(data) { std::cout << "Test constructor {" << data << "}" << std::endl; }
  int get_data() const { return data; }

  ~Test() { std::cout << "Test destructor {" << data << "}" << std::endl; }
};

// function prototypes
std::unique_ptr<std::vector<std::shared_ptr<Test>>> make();
void fill(std::vector<std::shared_ptr<Test>> &vec, int num);
void display(const std::vector<std::shared_ptr<Test>> &vec);

std::unique_ptr<std::vector<std::shared_ptr<Test>>> make(){
  return std::make_unique<std::vector<std::shared_ptr<Test>>>();
}

void fill(std::vector<std::shared_ptr<Test>> &vec, int num){
  int data;
  for (int i = 0; i < num; ++i)
  {
    std::cout << "Enter your data point [" << i + 1 << "]: ";
    std::cin >> data;
    std::shared_ptr<Test> ptr = std::make_shared<Test>(data);
    vec.push_back(ptr);
  }
}

void display(const std::vector<std::shared_ptr<Test>> &vec){
  for(const auto &v:vec ){
    std::cout << v->get_data() << std::endl;
  }
}


int main(){

  std::unique_ptr<std::vector<std::shared_ptr<Test>>> vec_ptr;
  vec_ptr = make();

  std::cout << "How many data points do you want to enter: ";

  int num;
  std::cin >> num;
  fill(*vec_ptr, num);
  display(*vec_ptr);

  return 0;
}



