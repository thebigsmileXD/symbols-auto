#pragma once

class GrindstoneContainerController : ContainerController {

    virtual ~GrindstoneContainerController();
    virtual ~GrindstoneContainerController();
    virtual void isItemAllowed(ItemInstance const&)const;
    virtual void isItemAllowedAtSlot(ContainerItemStack const&, int)const;
    virtual void isItemFiltered(Recipes const&, ContainerItemStack const&)const;
    virtual void getBackgroundStyle(int)const;
    virtual void _canSet(int, ContainerItemStack const&, ItemTransferAmount)const;
    virtual void _getAvailableSetCount(int, ContainerItemStack const&)const;
    virtual void _getAvailableAddCount(int)const;
    virtual void _canRemove(int, int)const;
    virtual void _onItemChanged(int);
}
