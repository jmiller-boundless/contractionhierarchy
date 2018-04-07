#include "DirectedEdge.h"
#include<limits>
#include <stdexcept>

using namespace std;


DirectedEdge::DirectedEdge(long int edgeIdIn) : edgeId(DirectedEdge::checkId(edgeIdIn))
{
     
}

DirectedEdge::~DirectedEdge()
{
}

long int DirectedEdge::checkId(long int proposedId){
    if (proposedId == DirectedEdge::PLACEHOLDER_ID_DO_NOT_SERIALIZE || proposedId == DirectedEdge::PLACEHOLDER_ID_NO_SOURCE_DATA_EQUIVALENT) {
        throw std::invalid_argument( "Attempt to create DirectedEdge with reserved ID, " + proposedId );
    }
    return proposedId;
}



