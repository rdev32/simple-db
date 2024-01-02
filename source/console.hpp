#include <string>

class Console
{
public:
    Console(int w, int h) : width(w), height(h) {}
    void start();
    void loadDatabase();
    void saveDatabase();
    void displayHelp();
    void displayTables();
    void displayDatabases();
    void query(const std::string &query);

private:
    std::vector<std::string> commands;
    int width, height;
};
