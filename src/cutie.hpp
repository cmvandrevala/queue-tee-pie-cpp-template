#include <string>

class Cutie {
  private:
    std::string description;
    int cuteness_rating;

  public:
    Cutie(std::string description, int cuteness_rating) {
      this->description = description;
      this->cuteness_rating = cuteness_rating;
    }

    std::string get_description() {
      return this->description;
    }

    int get_cuteness_rating() {
      return this->cuteness_rating;
    }
}
