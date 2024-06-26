#ifndef GUARD_POKEMON_ANIMATION_H
#define GUARD_POKEMON_ANIMATION_H

u8 GetSpeciesBackAnimSet(u16 species);
void LaunchAnimationTaskForFrontSprite(struct Sprite *sprite, u8 frontAnimId);
void StartMonSummaryAnimation(struct Sprite *sprite, u8 frontAnimId);
void LaunchAnimationTaskForBackSprite(struct Sprite *sprite, u8 backAnimSet);
void SetSpriteCB_MonAnimDummy(struct Sprite *sprite);
void ChangeSpriteSize(struct Sprite *sprite, s16 xScale, s16 yScale, u16 rotation);

#endif // GUARD_POKEMON_ANIMATION_H
