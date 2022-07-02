#include <pgmspace.h>

struct FNT_HZ // 汉字字模数据结构
{
  char  Index[4];	// 汉字内码索引,如"中",在UTF-8编码下，每个汉字占3个字节，第四个是结束符0
  const unsigned char* hz_Id;  // 点阵码数据，存放内码后对应的点阵序列每个字需要32个字节的点阵序列
  unsigned char hz_width;    //序列长度
};

const FNT_HZ hz_zhou PROGMEM =
{
    "周",
	(const unsigned char PROGMEM[]){
	    0x00,0x00,0x3F,0xF8,0x21,0x08,0x21,0x08,0x2F,0xE8,0x21,0x08,0x21,0x08,0x3F,0xF8,
	    0x20,0x08,0x27,0xC8,0x24,0x48,0x24,0x48,0x27,0xC8,0x40,0x08,0x40,0x28,0x80,0x10/*"周",0*/
    },
    16,
};

const FNT_HZ hz_yi PROGMEM =
{
    "一",
	(const unsigned char PROGMEM[]){
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFE,
	    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00/*"一",1*/
    },
    16,
};

const FNT_HZ hz_er PROGMEM =
{
    "二",
	(const unsigned char PROGMEM[]){
        0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFE,0x00,0x00,0x00,0x00,0x00,0x00/*"二",0*/
    },
    16,
};

const FNT_HZ hz_san PROGMEM =
{
    "三",
	(const unsigned char PROGMEM[]){
        0x00,0x00,0x00,0x00,0x7F,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xF8,
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFE,0x00,0x00,0x00,0x00,/*"三",1*/
    },
    16,
};


const FNT_HZ hz_si PROGMEM =
{
    "四",
	(const unsigned char PROGMEM[]){
        0x00,0x00,0x00,0x00,0x7F,0xFC,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,
        0x48,0x44,0x48,0x3C,0x50,0x04,0x60,0x04,0x40,0x04,0x7F,0xFC,0x40,0x04,0x00,0x00,/*"四",2*/
    },
    16,
};

const FNT_HZ hz_wu PROGMEM =
{
    "五",
	(const unsigned char PROGMEM[]){
        0x00,0x00,0x7F,0xFC,0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x3F,0xF0,0x04,0x10,
        0x04,0x10,0x04,0x10,0x04,0x10,0x08,0x10,0x08,0x10,0x08,0x10,0xFF,0xFE,0x00,0x00,/*"五",3*/
    },
    16,
};

const FNT_HZ hz_liu PROGMEM =
{
    "六",
	(const unsigned char PROGMEM[]){
        0x02,0x00,0x01,0x00,0x00,0x80,0x00,0x80,0x00,0x00,0xFF,0xFE,0x00,0x00,0x00,0x00,
        0x04,0x40,0x04,0x20,0x08,0x10,0x08,0x08,0x10,0x08,0x20,0x04,0x40,0x04,0x00,0x00,/*"六",4*/
    },
    16,
};

const FNT_HZ hz_ri PROGMEM =
{
    "日",
	(const unsigned char PROGMEM[]){
        0x00,0x00,0x1F,0xF0,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x1F,0xF0,
        0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x1F,0xF0,0x10,0x10,/*"日",5*/
    },
    16,
};