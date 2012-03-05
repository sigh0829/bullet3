/*
Physics Effects Copyright(C) 2010 Sony Computer Entertainment Inc.
All rights reserved.

Physics Effects is open software; you can redistribute it and/or
modify it under the terms of the BSD License.

Physics Effects is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
See the BSD License for more details.

A copy of the BSD License is distributed with
Physics Effects under the filename: physics_effects_license.txt
*/

#define BarrelVtxCount 57
#define BarrelIdxCount 180

static float BarrelVtx[] = {
0.0f,-0.5f,0.0f,				0.0f,-1.0f,0.0f,
0.282362f,-0.5f,-0.205148f,     0.0f,-1.0f,0.0f,
0.349018f,-0.5f,0.0f,           0.0f,-1.0f,0.0f,
0.107853f,-0.5f,-0.331936f,     0.0f,-1.0f,0.0f,
-0.107853f,-0.5f,-0.331936f,    0.0f,-1.0f,0.0f,
0.107853f,-0.5f,-0.331936f,     0.0f,-1.0f,0.0f,
-0.282362f,-0.5f,-0.205148f,    0.0f,-1.0f,0.0f,
-0.349018f,-0.5f,0.0f,          0.0f,-1.0f,0.0f,
-0.282362f,-0.5f,0.205148f,     0.0f,-1.0f,0.0f,
-0.107853f,-0.5f,0.331936f,     0.0f,-1.0f,0.0f,
0.107853f,-0.5f,0.331936f,      0.0f,-1.0f,0.0f,
0.282362f,-0.5f,0.205148f,      0.0f,-1.0f,0.0f,
0.0f,0.5f,0.0f,                 0.0f,1.0f,0.0f,
0.349018f,0.5f,0.0f,            0.0f,1.0f,0.0f,
0.282362f,0.5f,-0.205148f,      0.0f,1.0f,0.0f,
0.107853f,0.5f,-0.331936f,      0.0f,1.0f,0.0f,
0.107853f,0.5f,-0.331936f,      0.0f,1.0f,0.0f,
-0.107853f,0.5f,-0.331936f,     0.0f,1.0f,0.0f,
-0.282362f,0.5f,-0.205148f,     0.0f,1.0f,0.0f,
-0.349018f,0.5f,0.0f,           0.0f,1.0f,0.0f,
-0.282362f,0.5f,0.205148f,      0.0f,1.0f,0.0f,
-0.107853f,0.5f,0.331936f,      0.0f,1.0f,0.0f,
0.107853f,0.5f,0.331936f,       0.0f,1.0f,0.0f,
0.282362f,0.5f,0.205148f,       0.0f,1.0f,0.0f,
0.349018f,-0.5f,0.0f,           0.957307f,-0.289072f,0.0f,
0.404509f,0.0f,-0.293893f,      0.809017f,0.0f,-0.587785f,
0.5f,0.0f,0.0f,                 1.0f,0.0f,0.0f,
0.282362f,-0.5f,-0.205148f,     0.774478f,-0.289072f,-0.562691f,
0.154508f,0.0f,-0.475528f,      0.309017f,0.0f,-0.951057f,
0.107853f,-0.5f,-0.331936f,     0.295824f,-0.289072f,-0.910453f,
0.107853f,-0.5f,-0.331936f,     0.295824f,-0.289072f,-0.910453f,
-0.154509f,0.0f,-0.475528f,     -0.309017f,0.0f,-0.951057f,
0.154508f,0.0f,-0.475528f,      0.309017f,0.0f,-0.951057f,
-0.107853f,-0.5f,-0.331936f,    -0.295824f,-0.289072f,-0.910453f,
-0.404509f,0.0f,-0.293893f,     -0.809017f,0.0f,-0.587785f,
-0.282362f,-0.5f,-0.205148f,    -0.774478f,-0.289072f,-0.562691f,
-0.5f,0.0f,0.0f,                -1.0f,0.0f,0.0f,
-0.349018f,-0.5f,0.0f,          -0.957307f,-0.289072f,0.0f,
-0.404508f,0.0f,0.293893f,      -0.809017f,0.0f,0.587785f,
-0.282362f,-0.5f,0.205148f,     -0.774478f,-0.289072f,0.562691f,
-0.154509f,0.0f,0.475528f,      -0.309017f,0.0f,0.951056f,
-0.107853f,-0.5f,0.331936f,     -0.295824f,-0.289072f,0.910453f,
0.154509f,0.0f,0.475528f,       0.309017f,0.0f,0.951056f,
0.107853f,-0.5f,0.331936f,      0.295824f,-0.289072f,0.910453f,
0.404509f,0.0f,0.293892f,       0.809017f,0.0f,0.587785f,
0.282362f,-0.5f,0.205148f,      0.774478f,-0.289072f,0.562691f,
0.282362f,0.5f,-0.205148f,      0.774478f,0.289072f,-0.562691f,
0.349018f,0.5f,0.0f,            0.957307f,0.289072f,0.0f,
0.107853f,0.5f,-0.331936f,      0.295824f,0.289072f,-0.910453f,
-0.107853f,0.5f,-0.331936f,     -0.295824f,0.289072f,-0.910453f,
0.107853f,0.5f,-0.331936f,      0.295824f,0.289072f,-0.910453f,
-0.282362f,0.5f,-0.205148f,     -0.774478f,0.289072f,-0.562691f,
-0.349018f,0.5f,0.0f,           -0.957307f,0.289072f,0.0f,
-0.282362f,0.5f,0.205148f,      -0.774478f,0.289072f,0.562691f,
-0.107853f,0.5f,0.331936f,      -0.295824f,0.289072f,0.910453f,
0.107853f,0.5f,0.331936f,       0.295824f,0.289072f,0.910453f,
0.282362f,0.5f,0.205148f,       0.774478f,0.289072f,0.562691f,
};

static float BarrelTex[] = {
0.0f,0.5f,
0.0f,0.85f,
0.0f,0.75f,
0.0f,0.95f,
0.0f,0.05f,
0.0f,-0.05f,
0.0f,0.15f,
0.0f,0.25f,
0.0f,0.35f,
0.0f,0.45f,
0.0f,0.55f,
0.0f,0.65f,
1.0f,0.5f,
1.0f,0.75f,
1.0f,0.85f,
1.0f,0.95f,
1.0f,-0.05f,
1.0f,0.05f,
1.0f,0.15f,
1.0f,0.25f,
1.0f,0.35f,
1.0f,0.45f,
1.0f,0.55f,
1.0f,0.65f,
0.0f,0.75f,
0.5f,0.85f,
0.5f,0.75f,
0.0f,0.85f,
0.5f,0.95f,
0.0f,0.95f,
0.0f,-0.05f,
0.5f,0.05f,
0.5f,-0.05f,
0.0f,0.05f,
0.5f,0.15f,
0.0f,0.15f,
0.5f,0.25f,
0.0f,0.25f,
0.5f,0.35f,
0.0f,0.35f,
0.5f,0.45f,
0.0f,0.45f,
0.5f,0.55f,
0.0f,0.55f,
0.5f,0.65f,
0.0f,0.65f,
1.0f,0.85f,
1.0f,0.75f,
1.0f,0.95f,
1.0f,0.05f,
1.0f,-0.05f,
1.0f,0.15f,
1.0f,0.25f,
1.0f,0.35f,
1.0f,0.45f,
1.0f,0.55f,
1.0f,0.65f,
};

static unsigned short BarrelIdx[] = {
0,1,2,
0,3,1,
0,4,5,
0,6,4,
0,7,6,
0,8,7,
0,9,8,
0,10,9,
0,11,10,
0,2,11,
12,13,14,
12,14,15,
12,16,17,
12,17,18,
12,18,19,
12,19,20,
12,20,21,
12,21,22,
12,22,23,
12,23,13,
24,25,26,
24,27,25,
27,28,25,
27,29,28,
30,31,32,
30,33,31,
33,34,31,
33,35,34,
35,36,34,
35,37,36,
37,38,36,
37,39,38,
39,40,38,
39,41,40,
41,42,40,
41,43,42,
43,44,42,
43,45,44,
45,26,44,
45,24,26,
26,46,47,
26,25,46,
25,48,46,
25,28,48,
32,49,50,
32,31,49,
31,51,49,
31,34,51,
34,52,51,
34,36,52,
36,53,52,
36,38,53,
38,54,53,
38,40,54,
40,55,54,
40,42,55,
42,56,55,
42,44,56,
44,47,56,
44,26,47,
};

