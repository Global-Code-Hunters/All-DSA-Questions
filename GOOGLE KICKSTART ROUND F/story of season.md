# story of season

## Problem

    You are a super farmer with some vegetable seeds and an infinitely large farm. In fact, not only are you a farmer, but you are also secretly a super programmer! As a super programmer, you hope to maximize the profit of your farming using your programming skills.

    Since your daily energy is limited, you can plant at most X seeds each day. In the beginning, you have N kinds of vegetable seeds. The number of seeds of the i-th kind of vegetable is Qi, and each seed of this kind needs Li days to mature from the day it is planted. Once it matures, you can sell it for Vi dollars. Assume that no energy or time is required for harvesting and selling vegetables. Also, your farm is infinitely large so the growing vegetables do not crowd out each other.

    Notice that although the area of your farm is infinite, the number of days that you can plant seeds is limited. The warm season only lasts D days, and after that, the harsh winter comes. Any vegetable that has not matured yet will die immediately and cannot be turned into profit. The remaining seeds that were not planted cannot be turned into profit either.

    As a super farmer and a super programmer, you want to come up with a perfect planting plan that will maximize your profit. Find the total amount of profit you will earn.

    Input
    The first line of the input gives the number of test cases, T. T test cases follow.
    The first line of each test case contains three integers D, N, and X: the number of days of the warm season, the number of kinds of vegetable seeds you have to start with, and the maximum number of seeds you can plant each day, respectively.
    The next N lines describe the seeds. The i-th line contains three integers Qi, Li, and Vi: the quantity of this kind of seed, the number of days it needs to mature, and the value of each matured plant, respectively.

    Output
    For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1) and y is the maximum amount of money you can earn by optimizing your farming plan.

    Limits
    Memory limit: 1 GB.
    1≤T≤100.
    1≤Vi≤106, for all i.
    1≤Li≤D, for all i.
    Test Set 1
    Time limit: 20 seconds.
    2≤D≤1000.
    1≤N≤15.
    X=1.
    Qi=1, for all i.
    Test Set 2
    Time limit: 60 seconds.
    2≤D≤105.
    1≤N≤105.
    1≤X≤109.
    1≤Qi≤106, for all i.
    Test Set 3
    Time limit: 60 seconds.
    2≤D≤1012.
    1≤N≤105.
    1≤X≤109.
    1≤Qi≤106, for all i.
    D×X≤1018.
    Sample
    Note: there are additional samples that are not run on submissions down below.

## Sample Input
    2
    5 4 1
    1 2 3
    1 3 10
    1 4 5
    1 2 2
    5 1 1
    1 1 1

## output
    Case #1: 18
    Case #2: 1

