#pragma once

class MoveActorAbsolutePacket : Packet {

    virtual ~MoveActorAbsolutePacket();
    virtual ~MoveActorAbsolutePacket();
    virtual void getId(void)const;
    virtual void _ZNK23MoveActorAbsolutePacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
