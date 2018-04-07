#ifndef DIRECTEDEDGE_H
#define DIRECTEDEDGE_H
#include<limits>

using namespace std;

class DirectedEdge
{
private:

public:
    static long int checkId(long int proposedId);
    static long int const PLACEHOLDER_ID_DO_NOT_SERIALIZE = numeric_limits<long int>::min();;
    static long int const PLACEHOLDER_ID_NO_SOURCE_DATA_EQUIVALENT = numeric_limits<long int>::min()+1;
    long int const edgeId;
    DirectedEdge(long int edgeIdIn);
    ~DirectedEdge();


};

#endif // DIRECTEDEDGE_H
