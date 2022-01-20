#include "gtest/gtest.h"

#include "grille.h"

TEST(test_zone_grille, GereContenuGrille)
{
    Grille grid;

    //TEST sur la premiere case remplie 
    EXPECT_TRUE( (grid.getCase(0,0) != nullptr) ) << "Error: case non définie" << "\n";


    //TEST sur la derniere case remplie 
    EXPECT_TRUE( (grid.getCase(9,9) != nullptr) ) << "Error: case non définie" << "\n";
        
}
    


int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
