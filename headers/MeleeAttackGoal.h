#pragma once

class MeleeAttackGoal : Goal {

    virtual ~MeleeAttackGoal();
    virtual ~MeleeAttackGoal();
    virtual void canUse(void);
    virtual void canContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
    virtual void _getAttackReachSqr(void);
    virtual void _lookAtTarget(Actor *)const;
    virtual void _mobCanPathToTarget(Actor const*)const;
    virtual void _shouldRecalculatePath(Actor const*);
    virtual void _recalculateTargetPosition(Actor const*);
    virtual void _adjustTimeToRecalculatePath(float);
    virtual void _attemptPathToTarget(Actor *);
    virtual void _attemptAttackTarget(Actor *);
}
