#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>  // for std::out_of_range
using namespace std;

class flashCards
{
public:
    int roll_no;
    string quest;
    string ans;

    flashCards() : roll_no(0), quest(" "), ans(" ") {}
    
    flashCards(int id, string a_quest, string a_ans) : 
        roll_no(id), quest(a_quest), ans(a_ans) {}

    string getQuestion() const { return quest; }
    string getAns() const { return ans; }
};

class Deck
{
private:
    vector<flashCards> cards;

public:
    void addCard(const flashCards& card)
    {
        cards.push_back(card);
    }

    void removeCard(int index) 
    {
        if (index >= 0 && index < cards.size()) 
        {
            cards.erase(cards.begin() + index);
        }
        else 
        {
            cerr << "Invalid index.\n";
        }
    }

    flashCards getCard(int index) const 
    {
        if (index >= 0 && index < cards.size()) {
            return cards[index];
        }
        throw out_of_range("Invalid index.");
    }

    int size() const
    {
        return static_cast<int>(cards.size());
    }
};

// Forward declarations since these classes aren't implemented
class User {};
class Quiz {};
class Subject {};

class FlashcardApp {
private:
    Deck deck;
    User user;

public:
    void run() {
        // Implementation needed
    }
    
    void loadSampleCards() {
        // Implementation needed
    }
};

int main() {
    // You can add test code here if needed
    return 0;
}