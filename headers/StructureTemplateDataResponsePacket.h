#pragma once

class StructureTemplateDataResponsePacket : Packet {

    virtual ~StructureTemplateDataResponsePacket();
    virtual ~StructureTemplateDataResponsePacket();
    virtual void getId(void)const;
    virtual void _ZNK35StructureTemplateDataResponsePacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
