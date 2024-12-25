# CoffeeFishingRemake

This mod rewrite the chance of catch fish.

You can edit the catchable things by the config file where you can found in 
```bash
%profile%/Coffeesw/CoffeeFishingRemakeConfig.json
```
Just give the types name of what you want and the weight.

For example, here's an "apple" and a "rag" types, the weight of them both are 5, then the chance of getting them both are 50%.

And the config below:
```json
{
    //...
    "YieldItems": [
        {
            "ItemType": "apple",
            "Weight": 5
        },
        {
            "ItemType": "rag",
            "Weight": 5
        }
    ]
}
```

If change the weight of apple to 10, like this below:
```json
{
    //...
    "YieldItems": [
        {
            "ItemType": "apple",
            "Weight": 10
        },
        {
            "ItemType": "rag",
            "Weight": 5
        }
    ]
}
```

Then you will get "apple" with the chance of 2/3, and the rag with the chance of 1/3.

Also you can config a tip when catching someting.If use the empty like this:
```json
{
    "SuccessCatchMessage": "",
}

```
then you should get no tips of the right-down corner.(I haven't test it...)

# About the chance to catch fish
```json
{
    "ChanceForYieldItem": 0.20000000298023225
}
```
this Configuration item affect the chance to fish success in an animation circle. It should start from 0 to 1. 1 means you will fish successfully immediately.

I haven't write the YieldItems Quantity.Because different thing has different Quantity Types.It's a little complicated for me right now.

# Warning
You will always have 1 weight chance to get "Wellies_Black".I write the reason in the code.

# About Repacking
You can do whatever you want with the mod.

# Thanks
I'm very appreciate to Zens. His opensourse code helpd me a lot.
https://github.com/ZenarchistCode