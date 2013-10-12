/**
 * @filename HHTargetNode.h
 * @author Morgan Wall
 * @date 23-9-2013
 *
 * @brief The base class for sprite describing a target in the scene graph of
 * a game state.
 */

#import "KPSpriteNode.h"
#import <SpriteStackKit/SSKTextureManager.h>

@interface KPTargetNode : KPSpriteNode

/**
 * @brief An enumeration of the types of targets.
 */
typedef enum type {
    TargetTypeBlueMonkey,
    TargetTypePinkMonkey
} TargetType;

/**
 * @brief Initialise a target node with a specific target type and texture.
 *
 * @param targetType
 * The type of target.
 *
 * @param textures
 * A model object containing all the textures loaded for the game.
 *
 * @returns The initialised target node object.
 */
- (id)initWithType:(TargetType)targetType textures:(SSKTextureManager*)textures;

@end