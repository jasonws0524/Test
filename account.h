#ifndef	WALLET_ACCOUNT_H
#define	WALLET_ACCOUNT_H

/*****************************
功    能：生成一个16字节(128bit)的随机种子
函 数 名：Get_random_seed
入    参：src  : 目的地址  16个字节
		  length: 目的地址长度
返回类型：char  0成功
*****************************/
char Get_random_seed(char *src,unsigned int length);

/*****************************
功    能：种子生成助记符(密语)
函 数 名：Seed_to_mnemonic
入    参：seed  : 种子地址，16个字节
		  src  : 目的地址    12个单词
		  length: 目的地址长度
		  locale: 0中文/1英文；
返回类型：char  0成功
*****************************/
char Seed_to_mnemonic(char *seed,char *src,unsigned int length,int locale);

/*****************************
功    能：助记符(密语)生成种子
函 数 名：Mnemonic_to_seed
入    参：mnemonic  : 助记词，12个单词
		  src  : 目的地址      16个字节
		  length: 目的地址长度
		  locale: 0中文/1英文；
返回类型：char  0成功
*****************************/
char Mnemonic_to_seed(char *mnemonic,char *src,unsigned int length,int locale);

/*****************************
功    能：种子生成私钥
函 数 名：Get_private_key
入    参：seed  : 种子地址，16个字节
		  src  : 目的地址   32个字节
		  length: 目的地址长度
		  id: 私钥序号
返回类型：char  0成功
*****************************/
char Get_private_key(char *seed,char *src,unsigned int length,unsigned int id);

/*****************************
功    能：私钥生成公钥
函 数 名：Get_public_key
入    参：private_key  : 私钥，32个字节
		  src  : 目的地址 65个字节
		  length: 目的地址长度
返回类型：char  0成功
*****************************/
char Get_public_key(char *private_key,char *src,unsigned int length);

/*****************************
功    能：公钥生成比特币地址(BASE58地址格式)
函 数 名：Get_Address
入    参：public_key  : 私钥，32个字节
		  src  : 目的地址 65个字节
		  length: 目的地址长度
返回类型：char  0成功
*****************************/
char Get_Address(char *public_key,char *src,unsigned int length);


#endif

