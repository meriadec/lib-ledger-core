// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from configuration.djinni

package co.ledger.core;

import java.util.concurrent.atomic.AtomicBoolean;

public abstract class Configuration {
    public static final String KEYCHAIN_OBSERVABLE_RANGE = "KEYCHAIN_OBSERVABLE_RANGE";

    public abstract String getString(String key, String fallback);

    public abstract Configuration putString(String key, String value);

    public abstract int getInt(String key, int fallback);

    public abstract Configuration putInt(String key, int value);

    public abstract boolean getBoolean(String key, boolean fallback);

    public abstract Configuration putBoolean(String key, boolean value);

    public abstract byte[] getData(String key, byte[] fallback);

    public abstract Configuration putData(String key, byte[] data);

    public static native Configuration newInstance();

    private static final class CppProxy extends Configuration
    {
        private final long nativeRef;
        private final AtomicBoolean destroyed = new AtomicBoolean(false);

        private CppProxy(long nativeRef)
        {
            if (nativeRef == 0) throw new RuntimeException("nativeRef is zero");
            this.nativeRef = nativeRef;
        }

        private native void nativeDestroy(long nativeRef);
        public void destroy()
        {
            boolean destroyed = this.destroyed.getAndSet(true);
            if (!destroyed) nativeDestroy(this.nativeRef);
        }
        protected void finalize() throws java.lang.Throwable
        {
            destroy();
            super.finalize();
        }

        @Override
        public String getString(String key, String fallback)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getString(this.nativeRef, key, fallback);
        }
        private native String native_getString(long _nativeRef, String key, String fallback);

        @Override
        public Configuration putString(String key, String value)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_putString(this.nativeRef, key, value);
        }
        private native Configuration native_putString(long _nativeRef, String key, String value);

        @Override
        public int getInt(String key, int fallback)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getInt(this.nativeRef, key, fallback);
        }
        private native int native_getInt(long _nativeRef, String key, int fallback);

        @Override
        public Configuration putInt(String key, int value)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_putInt(this.nativeRef, key, value);
        }
        private native Configuration native_putInt(long _nativeRef, String key, int value);

        @Override
        public boolean getBoolean(String key, boolean fallback)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getBoolean(this.nativeRef, key, fallback);
        }
        private native boolean native_getBoolean(long _nativeRef, String key, boolean fallback);

        @Override
        public Configuration putBoolean(String key, boolean value)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_putBoolean(this.nativeRef, key, value);
        }
        private native Configuration native_putBoolean(long _nativeRef, String key, boolean value);

        @Override
        public byte[] getData(String key, byte[] fallback)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getData(this.nativeRef, key, fallback);
        }
        private native byte[] native_getData(long _nativeRef, String key, byte[] fallback);

        @Override
        public Configuration putData(String key, byte[] data)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_putData(this.nativeRef, key, data);
        }
        private native Configuration native_putData(long _nativeRef, String key, byte[] data);
    }
}
