#ifndef PARSER_H_INCLUDED
#define PARSER_H_INCLUDED

#include <bits/stdc++.h>

using namespace std;

/** This file handles parsing the data we are going to work with **/
/** It also holds all the global variables we parse into         **/


string operation;
int last_instant, process_count;
vector<string> algorithms;
unordered_map<char, pair<int, int>> processes;


void parse_algorithms(string algorithmChunk)
{
    stringstream stream(algorithmChunk);
    while (stream.good())
    {
        string substr;
        getline(stream, substr, ',');
        algorithms.push_back(substr);
    }
}

void parse()
{
    string algorithmChunk;
    cin >> operation >> algorithmChunk >> last_instant >> process_count;
    for(int i=0; i<process_count; i++)
    {
        char p;
        cin >> p >> processes[p].first >> processes[p].second;
    }
    parse_algorithms(algorithmChunk);
}


#endif // PARSER_H_INCLUDED