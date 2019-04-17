#include <iostream>

int main(int argc, char** argv){
    //const int kPieceTypeKing = 0;
    //const int kPieceTypeQueen = 1;
    //const int kPieceTypeRook = 2;
    //const int kPieceTypePawn = 3;
    //int myPiece = kPieceTypeKing;

    typedef enum { kPieceTypeKing, kPieceTypeQueen, kPieceTypeRook, kPieceTypePawn } PieceT;

    PieceT myPiece = kPieceTypePawn;

    std::cout << "My current piece is: " << myPiece << std::endl;

    return 0;
}