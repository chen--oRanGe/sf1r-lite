///
/// @file MerchantScoreParser.h
/// @brief it converts from input (such as Value, file) to merchant score
/// @author Jun Jiang <jun.jiang@izenesoft.com>
/// @date Created 2012-05-16
///

#ifndef SF1R_MERCHANT_SCORE_PARSER_H
#define SF1R_MERCHANT_SCORE_PARSER_H

#include "MerchantScore.h"
#include <util/driver/Parser.h>
#include <util/driver/Value.h>

#include <string>
#include <istream>

namespace sf1r
{

class MerchantScoreParser : public ::izenelib::driver::Parser
{
public:
    virtual bool parse(const izenelib::driver::Value& merchantArray);

    bool parseFromFile(const std::string& filePath);

    const MerchantStrScoreMap& merchantStrScoreMap() const { return merchantStrScoreMap_; }

private:
    bool parseCategoryScoreFromValue_(
        const izenelib::driver::Value& categoryArray,
        CategoryStrScore& categoryStrScore
    );

    bool parseCategoryScoreFromStream_(
        std::istream& ist,
        CategoryStrScore& categoryStrScore
    );

private:
    MerchantStrScoreMap merchantStrScoreMap_;
};

} // namespace sf1r

#endif // SF1R_MERCHANT_SCORE_PARSER_H
