{\rtf1\ansi\ansicpg1252\cocoartf1561\cocoasubrtf200
{\fonttbl}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww10800\viewh8400\viewkind0
}

class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> ret(num + 1,0);
        for(int i=1; i<=num; i++)
            ret[i] = ret[i & (i-1)] + 1;
        return ret;
    }
};
