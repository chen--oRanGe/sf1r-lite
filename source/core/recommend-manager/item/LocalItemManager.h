/**
 * @file LocalItemManager.h
 * @author Jun Jiang
 * @date 2011-04-19
 */

#ifndef LOCAL_ITEM_MANAGER_H
#define LOCAL_ITEM_MANAGER_H

#include "ItemManager.h"

namespace sf1r
{
class DocumentManager;

class LocalItemManager : public ItemManager
{
public:
    LocalItemManager(DocumentManager& docManager);

    virtual bool hasItem(itemid_t itemId);

    virtual bool getItemProps(
        const std::vector<std::string>& propList,
        ItemContainer& itemContainer
    );

private:
    DocumentManager& docManager_;
};

} // namespace sf1r

#endif // LOCAL_ITEM_MANAGER_H
