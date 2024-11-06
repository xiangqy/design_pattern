#include "citation.h"

int main(int argc, char** argv) {
    BaseInfo base_info;
    base_info.SetAwards("全国计算机竞赛");
    base_info.SetAwardsClass("一等奖");
    Citation citation{ &base_info };

    citation.SetPrizeWinerInfo("UESTC", "naby", "male");

    auto* clone_citation = citation.Clone();
    clone_citation->SetAwardsInfo("英语竞赛", "二等奖");
    clone_citation->SetPrizeWinerInfo("UESTC", "Lily", "female");

    citation.Display();
    clone_citation->Display();

    delete clone_citation;
    clone_citation = nullptr;
    return 0;
}