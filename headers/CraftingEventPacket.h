#pragma once

class CraftingEventPacket : Packet {

    virtual ~CraftingEventPacket();
    virtual ~CraftingEventPacket();
    virtual void getId(void)const;
    virtual void _ZNK19CraftingEventPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
