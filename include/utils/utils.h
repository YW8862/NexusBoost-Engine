/*
 * @Author: YW8862 2165628227@qq.com
 * @Date: 2025-03-10 21:34:57
 * @LastEditors: YW8862 2165628227@qq.com
 * @LastEditTime: 2025-03-25 19:58:58
 * @FilePath: /yw/projects/NexusBoost-Engine/include/utils/utils.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#ifndef __READFILE_H__
#define __READFILE_H__
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <boost/algorithm/string.hpp>
#include "../../thirdpart/cppjieba/Jieba.hpp"

namespace ns_utils
{
    class FileUtils
    {
    public:
        static bool readFile(const std::string &filePath, std::string *result);
    };

    class StringUtils
    {
    public:
        static void cutString(const std::string &target, std::vector<std::string> *outString, const std::string &sep);
    };

    class JiebaUtils
    {
    public:
        static void split(const std::string &src,std::vector<std::string> *words);
    private:
        //定义静态成员jieba对象
        static cppjieba::Jieba jieba;
    };
    const char *const DICT_PATH = "./thirdpart/dict/jieba.dict.utf8";
    const char *const HMM_PATH = "./thirdpart/dict/hmm_model.utf8";
    const char *const USER_DICT_PATH = "./thirdpart/dict/user.dict.utf8";
    const char *const IDF_PATH = "./thirdpart/dict/idf.utf8";
    const char *const STOP_WORD_PATH = "./thirdpart/dict/stop_words.utf8";
};

#endif