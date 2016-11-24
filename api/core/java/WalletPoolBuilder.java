// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet_pool.djinni

package co.ledger.core;

import java.util.concurrent.atomic.AtomicBoolean;

public abstract class WalletPoolBuilder {
    public abstract WalletPoolBuilder setHttpClient(HttpClient client);

    public abstract WalletPoolBuilder setWebsocketClient(WebSocketClient client);

    public abstract WalletPoolBuilder setPathResolver(PathResolver pathResolver);

    public abstract WalletPoolBuilder setLogPrinter(LogPrinter printer);

    public abstract WalletPoolBuilder setThreadDispatcher(ThreadDispatcher dispatcher);

    public abstract WalletPoolBuilder setName(String name);

    public abstract WalletPoolBuilder setPassword(String password);

    public abstract void build(WalletPoolBuildCallback listener);

    public static native WalletPoolBuilder createInstance();

    private static final class CppProxy extends WalletPoolBuilder
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
        public WalletPoolBuilder setHttpClient(HttpClient client)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_setHttpClient(this.nativeRef, client);
        }
        private native WalletPoolBuilder native_setHttpClient(long _nativeRef, HttpClient client);

        @Override
        public WalletPoolBuilder setWebsocketClient(WebSocketClient client)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_setWebsocketClient(this.nativeRef, client);
        }
        private native WalletPoolBuilder native_setWebsocketClient(long _nativeRef, WebSocketClient client);

        @Override
        public WalletPoolBuilder setPathResolver(PathResolver pathResolver)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_setPathResolver(this.nativeRef, pathResolver);
        }
        private native WalletPoolBuilder native_setPathResolver(long _nativeRef, PathResolver pathResolver);

        @Override
        public WalletPoolBuilder setLogPrinter(LogPrinter printer)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_setLogPrinter(this.nativeRef, printer);
        }
        private native WalletPoolBuilder native_setLogPrinter(long _nativeRef, LogPrinter printer);

        @Override
        public WalletPoolBuilder setThreadDispatcher(ThreadDispatcher dispatcher)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_setThreadDispatcher(this.nativeRef, dispatcher);
        }
        private native WalletPoolBuilder native_setThreadDispatcher(long _nativeRef, ThreadDispatcher dispatcher);

        @Override
        public WalletPoolBuilder setName(String name)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_setName(this.nativeRef, name);
        }
        private native WalletPoolBuilder native_setName(long _nativeRef, String name);

        @Override
        public WalletPoolBuilder setPassword(String password)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_setPassword(this.nativeRef, password);
        }
        private native WalletPoolBuilder native_setPassword(long _nativeRef, String password);

        @Override
        public void build(WalletPoolBuildCallback listener)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_build(this.nativeRef, listener);
        }
        private native void native_build(long _nativeRef, WalletPoolBuildCallback listener);
    }
}
