//
// Created by tiago on 17/05/2020.
//

#ifndef CAL1920_MENU_H
#define CAL1920_MENU_H


#include <Graph/Graph.h>
#include <Graph/Preprocessor.h>

class Menu {


private:

    Graph * graph;
    bool IS_TESTING = false;
    bool IS_FIRST_TIME = false;
    string directory;
    string nodeFileName;
    string edgesFileName;
    string connectivityFileName;
    string tagFilePath;
    string floydFileName;
    int gridNum = 0;
    Preprocessor *preprocessor;
    int distanceEdges;

public:
    Menu(Graph * graph);

    void validOption(int &option, int optionsNumber);

    void menuSeparator();

    void runMenu(int origin,int destiny);

    void runMapMenu();

    void AStar(int origin, int dest,string option = "");

    void floydWarshall(Graph * graph);

    void loadGraph();

    void drawer(int origin, int dest);

    void preprocess(string directory);

    void cleanGraphRuntime(int origin,int dest);

    void setFolder(string city);

    const string &getTagFilePath() const;

    void setTagFilePath(const string &tagFilePath);

    void getOriginDest(int &origin, int &dest);

    void initialVertices(int &origin, int &dest, int option);

    string askForString(const string &what);

    bool askForBool(string text);

    vector<string> askForStringVectorAll(string what);

    void validCin(int &option);

    int askForId();

    int askForInt(const string &what);

    void runMasterpiece();

    void validDifficulty(int &option);

    void drawer(vector<int> confluencePoints);

    void showBiggestConnectedGraph(int origin, int dest);

    void defaultRun(string directory);

    void MandatoryPoints();
};


#endif //CAL1920_MENU_H
