#pragma once

class InputModeFloatOption : Option {

    virtual ~InputModeFloatOption();
    virtual ~InputModeFloatOption();
    virtual void save(std::vector<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>>> &);
    virtual void load(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void load(std::map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>>> &);
    virtual void load(Json::Value const&);
}
