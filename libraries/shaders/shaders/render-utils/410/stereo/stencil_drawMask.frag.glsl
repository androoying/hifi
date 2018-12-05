#version 410

layout(location = 0) in vec2 varTexCoord0;

void main()
{
    vec2 _20 = (varTexCoord0 * 2.0) - vec2(1.0);
    float _26 = _20.x;
    vec2 _49 = _20;
    _49.x = 0.949999988079071044921875 * ((_26 * ((_26 > 0.0) ? 2.0 : (-2.0))) - 1.0);
    if ((1.0 - dot(_49, _49)) > 0.0)
    {
        discard;
    }
}

