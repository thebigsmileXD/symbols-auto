#pragma once

class BigEndianStringByteInput : StringByteInput {

    virtual ~BigEndianStringByteInput();
    virtual ~BigEndianStringByteInput();
    virtual void _ZN14BytesDataInput10readStringB5cxx11Ev;
    virtual void _ZN14BytesDataInput14readLongStringB5cxx11Ev;
    virtual void readFloat(void);
    virtual void readDouble(void);
    virtual void readByte(void);
    virtual void readShort(void);
    virtual void readInt(void);
    virtual void readLongLong(void);
    virtual void readBytes(void *, unsigned long);
    virtual void numBytesLeft(void)const;
    virtual void readBigEndianBytes(void *, unsigned long);
}
